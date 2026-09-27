# Módulo 2 Motores transformadores y control

**Propósito:** distinguir qué produce movimiento, qué cambia el voltaje de CA y qué permite ordenar el encendido de una carga. Tiempo central: 105 minutos. Cuadernillo: páginas 3 y 4. Todas las actividades son de papel y pizarrón.

## Explicación para ti

Un **motor** convierte energía eléctrica en movimiento. La corriente en sus conductores y los campos magnéticos producen fuerzas y un par de giro. Tiene una parte fija, estator, y una parte móvil, rotor. Para el alumno basta relacionarlo con ventiladores, bombas y bandas; no necesita memorizar sus piezas internas.

En corriente directa (CD o CC), la corriente mantiene su sentido; una pila es una fuente usual. En corriente alterna (CA), cambia de sentido periódicamente. Existen motores para cada tipo de alimentación y distintas construcciones. No conectamos cualquier motor a cualquier fuente: se revisan tensión, tipo de corriente y especificaciones.

La alimentación **monofásica** utiliza una fase de CA; la **trifásica** utiliza tres fases desfasadas entre sí 120 grados eléctricos. “Trifásico” no significa simplemente “tiene tres cables” ni “siempre consume tres veces más”. Aquí solo se reconoce el término en una placa; no se enseñan conexiones.

### Transformador y fuente de alimentación

Un transformador convencional tiene bobinas acopladas mediante un campo magnético variable. Cambia el nivel de voltaje de CA. Puede reducirlo, elevarlo o mantenerlo para otras funciones; no crea energía ni convierte por sí solo CA en CD. Conectar una pila directamente a un transformador convencional no da una salida continua transformada y puede dañarlo.

**Faraday:** un cambio del flujo magnético a través de una bobina induce voltaje. Importa el cambio, no solo que haya un imán quieto. **Lenz:** la corriente inducida, cuando existe un camino cerrado, produce un efecto magnético que se opone al cambio que la origina. Esta oposición es consistente con la conservación de la energía. Explícalas verbalmente, sin derivadas. [OpenStax, transformadores](https://openstax.org/books/college-physics-2e/pages/23-7-transformers).

En un transformador ideal: `Vs / Vp = Ns / Np`. Vp y Vs son voltajes de entrada y salida; Np y Ns, número de vueltas de las bobinas. Si tiene 1000 vueltas de entrada y 100 de salida, la relación es 1/10. Con 120 V CA de entrada daría 12 V CA de salida. **Es un ejemplo de pizarrón, no una conexión a realizar.** Para el curso basta comprender “diez veces menos voltaje”; el cálculo por vueltas es ampliación.

Una fuente que entrega CD incorpora las funciones necesarias para obtener esa salida. La rectificación, que veremos con diodos, convierte CA en una señal unidireccional; filtrado y regulación pueden suavizar y estabilizar la salida. Los cargadores actuales pueden usar circuitos conmutados; no todos son un simple transformador de red. No los abrimos.

### Relevador y contactor

Un relevador electromecánico tiene una bobina que, al energizarse con la alimentación adecuada, mueve contactos. La **bobina recibe la orden** y el **contacto abre o cierra otro camino eléctrico**. No son el mismo circuito.

- Normalmente abierto (NA): sin activar la bobina, el contacto está abierto; al activarla, cierra.
- Normalmente cerrado (NC): sin activar la bobina, el contacto está cerrado; al activarla, abre.

“Normalmente” se refiere al estado sin accionar, no al estado más frecuente durante el trabajo. Los contactos no generan voltaje: permiten o interrumpen el paso de la alimentación conectada al circuito de carga.

Un contactor realiza una función de conmutación apropiada para cargas de potencia según su diseño y clasificación; es habitual en motores industriales. No todo relevador puede manejar un motor. Importan, entre otras cosas, la tensión de la bobina, la capacidad de los contactos y la corriente de arranque. Aquí representamos su función sin seleccionar ni cablear equipos.

```text
Señal de mando ---> bobina del relevador
                          : acción mecánica
Alimentación ---> contacto NA ---> motor ---> retorno
```

Las dos líneas muestran funciones distintas; los puntos no representan un cable que una ambos circuitos.

## Caso de la banda

Escribe esta placa **ficticia para el ejercicio**: “Motor CD, 12 V, corriente de marcha en este caso 0.5 A”. Pide identificar alimentación, corriente y potencia eléctrica de entrada: 6 W. No se puede calcular la velocidad, la capacidad para mover cajas ni elegir un relevador solo con esos tres datos. El tamaño de las cajas, la transmisión y el arranque también importan.

Después escribe “Transformador: entrada 120 V CA; salida 12 V CA”. Pregunta si entrega exactamente la alimentación que pide ese motor. La respuesta es no: la salida sigue siendo CA. La coincidencia del número 12 no resuelve la compatibilidad.

## Actividad sin componentes

Entrega o escribe tarjetas: fuente, mando, bobina, contacto NA y motor. En parejas dibujan el camino de carga y una flecha separada desde la bobina hasta el contacto. Una persona representa la bobina y otra cambia la tarjeta de contacto de abierto a cerrado. El grupo predice cuándo puede recibir alimentación el motor. Es una representación de funciones, no un circuito de montaje.

Cambien NA por NC. Antes de repetir, todos escriben el estado esperado sin orden y con orden. Esto revela si entendieron “normalmente”. Usa las preguntas B1 a B4 del cuadernillo para registrar la actividad.

## Noción de instalaciones que sí conviene conservar

La protección ante sobrecorrientes, el aislamiento y la puesta a tierra cumplen funciones diferentes; no se sustituyen entre sí. Un interruptor de mando no garantiza por sí solo que un equipo esté aislado de su alimentación. En una instalación real se requieren diseño, protecciones y procedimientos adecuados; este curso no enseña a intervenir tableros ni a seleccionar conductores.

El programa menciona R.O.I.E. Para contextualizarlo hoy en México, la ficha oficial consultada el 22 de septiembre de 2026 identifica como **vigente la NOM-001-SEDE-2012, Instalaciones Eléctricas (utilización)**. Se presenta como referencia de instalaciones, sin memorizar artículos ni usarla como tutorial de cableado. [Catálogo oficial de la Secretaría de Economía](https://platiica.economia.gob.mx/normalizacion/nom-001-sede-2012/).

## Guion para el aula

| Bloque | Minutos | Trabajo |
| --- | ---: | --- |
| 1 Del circuito al movimiento | 25 | Explica motor, CD/CA y placa ficticia. Resuelven B1. |
| 2 Cambiar la alimentación | 25 | Distingue transformador y fuente de CD. Resuelven B2; Faraday y Lenz solo en palabras. |
| 3 Dar una orden | 35 | Representan bobina y contactos con tarjetas; completan B3 y B4. |
| 4 Elegir con información | 20 | Resuelven B5, comentan la referencia normativa y corrigen la confusión entre control y alimentación. |

Para 75 minutos: 20 de motor/placa, 15 de transformador, 30 de relevador y 10 de B5. Omite vueltas de bobinas y explicación de trifásica más allá de reconocer el término.

## Respuestas del cuadernillo para el docente

- **B1:** CD; 12 V; 0.5 A en la condición descrita; 6 W de potencia eléctrica de entrada. No determina potencia mecánica ni corriente de arranque.
- **B2:** no directamente, porque 12 V CA no equivale a 12 V CD. Un transformador convencional no rectifica por sí solo.
- **B3:** bobina sin activar: NA abierto, NC cerrado. Bobina activada: NA cerrado, NC abierto. Bajo el dibujo propuesto con NA y alimentación correcta, el motor recibe alimentación al activar la bobina.
- **B4:** deben aparecer mando a bobina, acción mecánica y camino separado de alimentación/contacto/motor/retorno. Un contacto por sí solo no alimenta el motor.
- **B5:** no alcanza con que “sea de 12 V”: ese dato puede referirse a la bobina. Faltan capacidad y tipo de contactos, características de la carga y arranque. La respuesta útil es identificar datos faltantes, no adivinar una compra.

Antes de avanzar, pide que expliquen la diferencia entre motor, transformador y relevador usando una acción: mover, transformar voltaje de CA y conmutar un circuito.
