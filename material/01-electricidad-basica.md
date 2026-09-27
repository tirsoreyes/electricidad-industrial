# Módulo 1 Electricidad básica

**Propósito:** que el alumno explique un circuito sencillo, calcule corriente y potencia en ejemplos de corriente directa, y distinga medición de voltaje de comprobación de continuidad. Tiempo central: 210 minutos. Cuadernillo: páginas 1 y 2.

## Lo que necesitas comprender antes de explicarlo

La corriente es movimiento ordenado de carga eléctrica. Para sostenerla en un circuito sencillo necesitamos una fuente, un camino cerrado y una carga que transforme energía. La pila transforma energía química en eléctrica; una lámpara transforma energía eléctrica en luz y calor. Los cables conectan los elementos.

**Voltaje y corriente son distintos.** El voltaje es diferencia de potencial entre dos puntos: expresa energía por unidad de carga. La corriente indica cuánta carga pasa por segundo. Puede existir voltaje entre los polos de una pila sin que haya un circuito externo cerrado. La corriente no se “gasta” al atravesar una lámpara; lo que se transforma es energía.

Puedes compararlo con agua: una diferencia de presión puede impulsar el flujo y un estrechamiento dificulta su paso. Úsalo solo como apoyo; la electricidad no es agua y el voltaje no es una cantidad de líquido almacenado.

| Magnitud | Símbolo usual | Unidad | Pregunta que ayuda a entenderla |
| --- | --- | --- | --- |
| Voltaje o tensión | V | voltio, V | ¿Qué diferencia de potencial hay entre estos puntos? |
| Corriente | I | amperio, A | ¿Cuánta carga pasa por segundo? |
| Resistencia | R | ohmio, Ω | ¿Cuánto se opone este elemento al paso de corriente? |
| Potencia | P | watt o vatio, W | ¿Qué tan rápido se transforma energía? |

La letra V puede representar la magnitud o la unidad según su posición: “V = 3 V” significa “el voltaje vale tres voltios”. Para evitar confusión, al iniciar escribe palabras completas. Conversiones necesarias: 1 A = 1000 mA; 1 kΩ = 1000 Ω; 1 kW = 1000 W. Así, 20 mA = 0.020 A y 0.5 A = 500 mA.

### Abierto cerrado y cortocircuito

Traza este dibujo y pide seguir el recorrido con el dedo:

```text
       interruptor       carga
 (+) -----o/ o-----------[ R ]-----+
 pila                            |
 (-) ----------------------------+
```

El símbolo `o/ o` representa un interruptor abierto. Cerrado, permite completar el camino. **Abierto:** hay una interrupción y no circula corriente por esa rama. **Cerrado con carga:** hay camino y la carga limita la corriente. **Cortocircuito:** aparece un camino de resistencia muy baja que puede desviar la corriente de la carga. No lo demuestres uniendo polos de la pila.

Un cable tiene resistencia pequeña, no exactamente cero. Para los cálculos iniciales se consideran ideales tanto los cables como la fuente.

### Ley de Ohm sin memorizar un triángulo

Para una resistencia óhmica, en condiciones aproximadamente constantes:

`V = I × R`     `I = V / R`     `R = V / I`

Con una fuente de 3 V y una resistencia de 150 Ω, queremos conocer la corriente. En `3 = I × 150`, dividimos ambos lados entre 150: `I = 3 / 150 = 0.020 A = 20 mA`. Al duplicar R a 300 Ω con el mismo voltaje, I baja a 0.010 A. Al duplicar V manteniendo R, I se duplica. Son cálculos en papel; no hace falta tener las resistencias.

No enseñes que cualquier aparato es una resistencia constante: LED y motores no siguen ese modelo de forma general. En un motor usamos la corriente indicada en un ejercicio o medida bajo condiciones conocidas; no deducimos su funcionamiento únicamente de la resistencia del devanado.

### Potencia y energía

Para los ejemplos de corriente directa usamos `P = V × I`. En la resistencia anterior: `P = 3 × 0.020 = 0.060 W`. Para el motor hipotético de nuestra banda, si recibe 12 V y consume 0.5 A en cierta condición, su potencia eléctrica de entrada es `12 × 0.5 = 6 W`. No toda se convierte en movimiento útil; hay pérdidas.

Si consume esos 6 W durante 2 horas, la energía es `E = P × t = 12 Wh = 0.012 kWh`. W mide potencia y Wh mide energía. El ejemplo no supone que todos los motores consuman lo mismo ni que la corriente al arrancar sea igual a la de marcha. En motores de corriente alterna no basta multiplicar voltaje por corriente para obtener siempre la potencia activa; eso se deja fuera de estos cálculos.

### Serie paralelo y Kirchhoff con números pequeños

En serie hay un solo camino: por cada resistencia circula la misma corriente y las caídas de voltaje se suman. Con 6 V, R1 = 100 Ω y R2 = 200 Ω en serie: R total = 300 Ω; I = 0.020 A; caídas de 2 V y 4 V. Se cumple `6 - 2 - 4 = 0`: es la ley de voltajes de Kirchhoff en este circuito.

En paralelo, las ramas se conectan entre los mismos dos puntos y tienen el mismo voltaje. Con 6 V y dos ramas de 300 Ω, cada rama conduce 0.020 A; la fuente entrega 0.040 A. En la unión, `40 mA = 20 mA + 20 mA`: es la ley de corrientes de Kirchhoff. No hace falta enseñar hoy la fórmula general de resistencia equivalente en paralelo.

```text
Serie:    (+) ---[100 Ω]---[200 Ω]--- (-)

Paralelo: (+) ---+---[300 Ω]---+----- (-)
                |            |
                +---[300 Ω]---+
```

## Demostración con tus materiales

Ensaya primero. Consulta las marcas y el manual de tu modelo: la ubicación de funciones y botones varía. Si no identificas claramente bornes y función, realiza solo el ejemplo en papel.

**Voltaje de una pila AA o AAA:** conecta negro a COM y rojo al borne identificado para V. Selecciona voltaje de corriente directa; si el rango es manual, elige uno superior a 1.5 V, como 20 V si está disponible. Pon rojo al positivo y negro al negativo. Anota el valor real, sin exigir exactamente 1.50 V. Retira las puntas al terminar. Una lectura negativa indica polaridad invertida respecto a las puntas; el voltaje sin carga no prueba por sí solo que la pila pueda alimentar bien un aparato. [Guía de Fluke](https://www.fluke.com/en-ie/learn/blog/digital-multimeters/how-to-measure-dc-voltage-with-a-digital-multimeter).

**Continuidad:** separa totalmente el conductor UTP de pilas y equipos. Usa COM y el borne correspondiente a Ω/continuidad; selecciona continuidad. Primero junta las puntas para reconocer la indicación del instrumento. Después toca los extremos pelados del mismo hilo: normalmente indicará baja resistencia o emitirá un sonido. Separa dos trozos que antes estaban en contacto para representar una interrupción. Con las puntas en los extremos exteriores ya no habrá continuidad. Si no tiene zumbador, usa resistencia: compara valor bajo con OL o fuera de rango. [Indicaciones de Fluke para resistencia y continuidad](https://www.fluke.com/en-us/learn/blog/clamps/how-to-measure-signals-using-test-probes).

No uses el modo A ni el borne de corriente en estas demostraciones. Un amperímetro se conecta en serie en un circuito preparado para ello; puesto directamente entre los polos puede provocar un cortocircuito. No midas Ω ni continuidad en una pila. La continuidad de un hilo no certifica que un cable de red transmita datos correctamente.

## Guion para el aula

| Bloque | Minutos | Qué haces y qué hacen los alumnos |
| --- | ---: | --- |
| 1 Del objeto al circuito | 20 | Presenta la banda de cajas. Dibujan fuente, cable, interruptor y carga. Predicen qué pasa al abrir el camino. |
| 2 Magnitudes y Ohm | 40 | Explica voltaje, corriente y resistencia. Resuelve 3 V / 150 Ω. En parejas completan A1 y A2. |
| 3 Medición | 35 | Todos predicen; tú mides la pila y la continuidad. Registran A3 y A4, sin inventar lecturas. |
| 4 Potencia | 30 | Distingue W de Wh con el motor de 12 V. Resuelven A5. |
| 5 Caminos de corriente | 45 | Dibuja serie y paralelo; calculan por ramas y corrigen A6 y A7. |
| 6 Diagnóstico y cierre | 40 | En parejas resuelven A8, explican su decisión y corrigen unidades. Pide explicar voltaje sin usar la palabra corriente. |

Puedes pausar al terminar cualquier bloque. Para 150 minutos: bloques 1, 2, 3 y 4 completos, 15 minutos de serie/paralelo cualitativo y 10 de cierre. Deja A6 y A7 numéricos como ampliación en clase, no tarea.

## Respuestas del cuadernillo para el docente

- **A1:** a) hay voltaje entre polos aunque no haya circuito externo cerrado; b) el cable no sustituye una carga y unir polos causa un cortocircuito; c) 20 mA = 0.020 A; 0.5 A = 500 mA.
- **A2:** 3 / 150 = 0.020 A = 20 mA; 3 / 300 = 0.010 A = 10 mA. Al aumentar R con V fijo, I disminuye.
- **A3:** valor observado con unidad V; roja al positivo y negra al negativo, modo V de directa. Sin medición, dejar “no realizada”; no poner una lectura ficticia.
- **A4:** conductor intacto, baja resistencia o sonido; camino interrumpido, OL/sin sonido. El instrumento puede usar otra indicación: aceptar descripción precisa. Solo hilo desconectado.
- **A5:** 6 W de entrada; en 2 h, 12 Wh. No afirmar que sean 6 W mecánicos útiles.
- **A6:** 300 Ω; 0.020 A; 2 V y 4 V; suman 6 V.
- **A7:** 6 V por rama; 20 mA por rama; 40 mA totales. Si se abre una rama, la otra conserva su camino en el modelo ideal.
- **A8:** V de directa para pila; continuidad/Ω para hilo suelto; nunca A entre polos. Que una pila dé voltaje no demuestra que el circuito restante esté cerrado ni que la pila funcione bien bajo carga.

## Dudas que conviene anticipar

“¿Más voltaje siempre significa más corriente?” Solo si mantenemos el mismo comportamiento de la carga; en una resistencia fija, sí. “¿OL significa cero?” No: en Ω suele indicar resistencia fuera de rango, como un circuito abierto. “¿Un cable que pita está perfecto?” Solo sabemos que existe un camino conductor bajo esa prueba.

Para avanzar, pide que expliquen por qué una pila puede tener voltaje sin alimentar nada y que resuelvan un cálculo sencillo conservando unidades. Si confunden A y V, vuelve a la medición antes de añadir fórmulas.

## Consulta para preparar la explicación

Texto de apoyo: [OpenStax, ley de Ohm y circuitos simples](https://openstax.org/books/college-physics-2e/pages/20-2-ohms-law-resistance-and-simple-circuits). Los ejemplos y actividades de este módulo son originales. Faraday y Lenz se introducen en el módulo 2, al explicar la transformación de energía.
