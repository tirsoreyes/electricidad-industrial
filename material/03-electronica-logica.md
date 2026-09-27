# Módulo 3 Electrónica industrial y lógica

**Propósito:** reconocer la función de componentes básicos y traducir condiciones sencillas a tablas de verdad. Tiempo central: 150 minutos. Cuadernillo: páginas 5 y 6. No requiere componentes electrónicos físicos.

## Explicación para ti

La electrónica permite tratar señales y controlar energía mediante componentes como diodos y transistores. Una señal representa información: por ejemplo, la temperatura o la presencia de una caja. Hay dispositivos que trabajan con señales pequeñas y otros destinados a controlar potencia.

Una señal **analógica** puede variar de manera continua dentro de un rango; una señal **digital** se interpreta como estados discretos. En nuestros ejercicios digitales solo habrá dos estados, 0 y 1. No significan obligatoriamente 0 V y 1 V: los niveles eléctricos dependen del dispositivo. Un valor de temperatura mostrado con dígitos no convierte al fenómeno físico en binario.

Ejemplo: “el sensor registra 28 °C” es una medición de una magnitud que varía continuamente; “hay caja/no hay caja” es una decisión binaria. Un sistema puede medir analógicamente y después tomar una decisión digital.

### Componentes que conviene reconocer

| Componente | Idea útil para explicarlo | Aplicación ilustrativa |
| --- | --- | --- |
| Resistencia | Limita corriente o establece relaciones de voltaje junto con otros elementos | Limitar corriente de un LED |
| Diodo | Favorece la conducción en un sentido dentro de sus límites de operación | Rectificación |
| LED | Diodo que emite luz cuando conduce adecuadamente | Indicador de encendido |
| Transistor | Puede controlar una corriente mediante una señal de control; según el circuito actúa como interruptor o amplificador | Accionar una carga mediante una etapa adecuada |
| SCR | Dispositivo de potencia que puede dispararse y mantenerse conduciendo mientras se cumplan sus condiciones de corriente | Control de potencia en circuitos apropiados |
| TRIAC | Dispositivo que permite controlar conducción en ambos sentidos en aplicaciones de CA | Regulación compatible de ciertas cargas de CA |

SCR y TRIAC son reconocimiento opcional: no se diseñan circuitos con ellos. Para el transistor basta “una señal permite controlar otra corriente”; no todos se controlan de la misma forma ni pueden alimentar cualquier motor. Una carga inductiva exige además protección y una etapa compatible.

Un LED no es una lámpara que se conecte a cualquier pila. Tiene polaridad y requiere limitar la corriente. Dibuja `fuente -> resistencia -> LED -> retorno` como esquema conceptual. Sin componentes identificados y valores calculados, no lo montes. Tampoco uses el cable UTP como resistencia limitadora: su resistencia es demasiado pequeña para cumplir esa función de manera controlada.

### Compuertas como condiciones

Una compuerta representa una operación lógica. Para enseñar, usa frases antes de símbolos:

- **AND (Y):** la salida es 1 cuando ambas condiciones son 1.
- **OR (O inclusiva):** la salida es 1 si al menos una condición es 1; también si ambas lo son.
- **NOT (NO):** invierte el estado: 0 pasa a 1 y 1 pasa a 0.

| A | B | A AND B | A OR B |
| --- | --- | --- | --- |
| 0 | 0 | 0 | 0 |
| 0 | 1 | 0 | 1 |
| 1 | 0 | 0 | 1 |
| 1 | 1 | 1 | 1 |

Una tabla de verdad enumera todas las combinaciones y su salida. Con dos entradas binarias hay cuatro filas; con tres, ocho. No representa necesariamente una secuencia temporal: cada fila es una situación posible.

## Ejemplo de la banda en papel

Definimos **H = habilitación mantenida**, **C = caja presente** y **M = orden de marcha**. Regla: `M = H AND C`. H es un interruptor mantenido en nuestra simulación, no un pulsador momentáneo de arranque. Si H = 1 y C = 0, M = 0. Si H = 1 y C = 1, M = 1. Al dejar de detectar la caja, se retira la orden. Todavía no hay memoria ni retención.

Como extensión, añade **B = bloqueo de proceso**: `M = H AND C AND NOT B`. B es un bloqueo didáctico de funcionamiento, no una función de paro de emergencia. Con H = 1, C = 1 y B = 1, M = 0. Esto permite explicar por qué una condición de bloqueo anula una orden en el modelo. No es un diseño de seguridad de una máquina real.

Para OR, cambia de problema: una luz de aviso L se enciende si la estación A **o** la estación B pide material. `L = A OR B`. Si ambas piden, la luz también se enciende.

## Actividad práctica con tarjetas

Dos alumnos sostienen tarjetas de entrada y otro aplica la regla; los demás predicen la salida antes de que se muestre. Recorre 00, 01, 10 y 11; repite cambiando AND por OR. Quien da la salida debe justificarla con una frase completa, no solo decir el número. Después cambien roles y resuelvan C1 a C4 en parejas.

Con cinco alumnos hay entradas, salida, lector de regla y observador. Con grupos mayores, cada trío puede llevar una tabla y comparar. No requiere exposición formal ni preparación en casa.

## Tiempo memoria y conteo

Un **temporizador** permite actuar según el tiempo transcurrido. Ejemplo: una condición debe permanecer activa 3 segundos antes de emitir una salida. Si se interrumpe antes y el temporizador no es retentivo, vuelve a empezar. Usa el reloj del docente, solo como representación.

Un **contador** registra eventos. Para contar una caja una sola vez, podemos detectar el cambio de 0 a 1, llamado flanco ascendente. Si el sensor permanece en 1 durante tres lecturas, eso puede ser una sola caja, no tres. Con estado previo 0 y lecturas `0, 1, 1, 0, 1, 0`, hay dos flancos ascendentes. En el módulo 4 aplicamos esto a una simulación de PLC.

Los sumadores digitales del programa quedan fuera del núcleo: no son necesarios para entender las actividades elegidas. Tampoco se exigen circuitos integrados, código binario de varios bits ni software.

## Guion para el aula

| Bloque | Minutos | Trabajo |
| --- | ---: | --- |
| 1 Señales y componentes | 35 | Contrasta temperatura y presencia. Reconocen funciones con C1 y C2. |
| 2 Decisiones AND OR NOT | 45 | Construye tablas con tarjetas y completa C3. |
| 3 Orden de marcha | 40 | Define H, C y B. Predicen y justifican C4. |
| 4 Tiempo y eventos | 30 | Simulan una espera y cuentan flancos en C5. Corrigen y cierran. |

Para 105 minutos: 20 de señales/diodo/LED/transistor, 35 de compuertas, 30 de orden de marcha y 20 de conteo. Omite SCR, TRIAC y la ampliación del temporizador si falta tiempo.

## Respuestas del cuadernillo para el docente

- **C1:** temperatura medida de manera continua, analógica; presencia sí/no, digital. No asociar digital obligatoriamente a 1 V.
- **C2:** LED, indicador luminoso; diodo, conducción preferente en un sentido; transistor, control electrónico de corriente. Al LED le falta limitación de corriente si se dibuja conectado directamente a una fuente sin elemento limitador.
- **C3:** AND = 0, 0, 0, 1; OR = 0, 1, 1, 1 para filas 00, 01, 10, 11. NOT 0 = 1; NOT 1 = 0.
- **C4:** para H,C,B = 1,1,0: M = 1. Para 1,0,0: M = 0. Para 1,1,1: M = 0. Si H = 0 siempre M = 0. “Bloqueo presente” significa B = 1 y NOT B = 0.
- **C5:** dos cajas en el modelo de flancos, no tres lecturas activas. Se necesita conocer el estado anterior para identificar la transición; se da como 0 al inicio.

Si confunden AND y OR, regresa a las frases y a la fila 01; si confunden NOT B, escribe primero la inversión por separado. No avances agregando símbolos hasta que puedan predecir la salida.

## Consulta para continuar

La aplicación de estados y conteo se desarrolla en el siguiente módulo. Para relacionar el modelo con un equipo real, consulta las secciones de conceptos de PLC en el [manual Siemens S7-200 SMART](https://cache.industry.siemens.com/dl/files/610/109745610/att_1115064/v1/s7-200_SMART_system_manual_en-US.pdf). Es referencia del docente; no se necesita leer el manual completo para dar esta clase.
