#include <Servo.h>
// UGM Playa Vicente - Tirso Reyes
// Maqueta didactica, no control de acceso real.
const byte TRIG = 7, ECHO = 8, SERVO = 9;
const byte ROJO = 4, VERDE = 5, BLOQUEO = 2;
const bool USAR_SERVO = true; // false: solo indicadores
const int CERRADO = 20, ABIERTO = 100;
const float ENTRADA_CM = 10, SALIDA_CM = 15;
const unsigned long ESPERA_MS = 2000;
Servo brazo;
bool presente = false, abierta = false;
byte cerca = 0, lejos = 0;
unsigned long contador = 0, inicioLibre = 0;
bool esperando = false;

float distanciaCm() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  unsigned long t = pulseIn(ECHO, HIGH, 25000UL);
  if (t == 0) return -1;
  float cm = t / 58.0;
  if (cm < 2 || cm > 200) return -1;
  return cm;
}

void aplicar(bool orden) {
  if (orden != abierta) {
    abierta = orden;
    if (USAR_SERVO)
      brazo.write(abierta ? ABIERTO : CERRADO);
  }
  digitalWrite(VERDE, abierta ? HIGH : LOW);
  digitalWrite(ROJO, abierta ? LOW : HIGH);
}

void actualizar(float cm, bool bloqueo, unsigned long ahora) {
  if (cm < 0) {
    cerca = lejos = 0;
    esperando = false;
    // Lectura invalida: conservar posicion; no ordenar cierre.
    return;
  }
  bool anterior = presente;
  if (cm <= ENTRADA_CM) {
    lejos = 0;
    if (cerca < 3) cerca++;
    if (cerca == 3) presente = true;
  } else if (cm >= SALIDA_CM) {
    cerca = 0;
    if (lejos < 3) lejos++;
    if (lejos == 3) presente = false;
  } else {
    cerca = lejos = 0; // zona intermedia: conservar estado
  }
  if (presente && !anterior) contador++;
  if (presente) {
    esperando = false;
    if (!bloqueo) aplicar(true);
  } else if (abierta) {
    // Cierre solo con distancia claramente libre y valida.
    if (cm >= SALIDA_CM) {
      if (!esperando) {
        esperando = true;
        inicioLibre = ahora;
      }
      if (ahora - inicioLibre >= ESPERA_MS) aplicar(false);
    } else {
      esperando = false;
    }
  }
}

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(ROJO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(BLOQUEO, INPUT_PULLUP);
  digitalWrite(TRIG, LOW);
  digitalWrite(ROJO, HIGH);
  digitalWrite(VERDE, LOW);
  if (USAR_SERVO) {
    brazo.attach(SERVO);
    brazo.write(CERRADO);
  }
  Serial.begin(9600);
  Serial.println("cm,detectado,bloqueo,orden_abierta,total");
}

void loop() {
  float cm = distanciaCm();
  bool bloqueo = digitalRead(BLOQUEO) == LOW;
  actualizar(cm, bloqueo, millis());
  Serial.print(cm); Serial.print(',');
  Serial.print(presente); Serial.print(',');
  Serial.print(bloqueo); Serial.print(',');
  Serial.print(abierta); Serial.print(',');
  Serial.println(contador);
  delay(100);
}
