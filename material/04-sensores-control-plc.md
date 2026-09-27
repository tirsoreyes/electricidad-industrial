# Módulo 4 Sensores control y PLC

**Propósito:** identificar entradas, decisiones y salidas, y resolver en papel el control y conteo de cajas de una banda. Tiempo central: 135 minutos. Cuadernillo: páginas 7 y 8.

## Explicación para ti

Un **sensor** detecta una condición física. Un **transductor** transforma una magnitud o forma de energía en otra; en medición suele producir una señal relacionada con la magnitud observada. Los términos pueden solaparse: un sensor de temperatura puede incorporar un transductor y electrónica que entregue una señal utilizable.

Un **actuador** produce una acción física, como un motor o una válvula. Un **controlador** recibe información, aplica reglas y determina salidas. Estas funciones forman una cadena:

```text
Caja -> sensor -> entrada -> controlador -> salida -> etapa de potencia -> motor
                                       regla
```

La alimentación que aporta la energía al motor también es necesaria, aunque no esté dibujada en esta cadena de información. El sensor no tiene que suministrar por sí mismo la energía que mueve la banda.

| Necesidad | Dispositivo ilustrativo | Qué conviene aclarar |
| --- | --- | --- |
| Detectar paso de cajas | Sensor fotoeléctrico | Puede detectar por interrupción o reflexión de luz, según tipo y montaje |
| Detectar metal cercano | Sensor inductivo | No es la opción genérica para detectar cartón sin metal |
| Saber si un mecanismo llegó a una posición | Interruptor de límite | Se acciona por contacto mecánico en el ejemplo |
| Medir temperatura | Sensor de temperatura | La señal puede requerir adaptación y una entrada compatible |

La selección real depende de distancia, material, ambiente y señal. Aquí elegimos por función y justificamos; no compramos ni instalamos sensores.

### Qué hace un PLC

PLC significa controlador lógico programable: es un controlador diseñado para tareas de automatización. Sus entradas reciben señales, su programa aplica reglas y sus salidas mandan a otros dispositivos. Una salida puede ordenar a un relevador, contactor o variador apropiado; no debe suponerse que cualquier salida pueda alimentar directamente un motor.

Para clase representamos un ciclo como **leer entradas -> aplicar regla -> actualizar salidas -> repetir**. Es una simplificación didáctica. Un equipo real además gestiona comunicaciones y diagnóstico; el orden concreto, los tiempos y las actualizaciones dependen del modelo y configuración. [Siemens, ciclo de ejecución del S7-1200](https://docs.tia.siemens.cloud/r/simatic_s7_1200_manual_collection_enus_20/plc-concepts/execution-of-the-user-program/processing-the-scan-cycle-in-run-mode).

Lo que cambia respecto a una tabla de verdad es que ahora observamos estados sucesivos en el tiempo y guardamos información anterior para contar. Si una señal es más rápida que la capacidad de lectura, un sistema real podría no detectarla con una entrada ordinaria; nuestros turnos lentos evitan ese problema.

## Simulación de una banda que mueve y cuenta cajas

La banda existe como dibujo. Definimos un sensor didáctico C que está en 1 mientras detecta una caja, una habilitación mantenida H y un bloqueo de proceso B. La salida M es solo una **orden de marcha**, no una medición de que el motor esté girando.

Regla de marcha: `M = H AND C AND NOT B`. El sistema solo da marcha mientras hay caja detectada, está habilitado y no hay bloqueo. Si quisiéramos continuar después de que la caja deje el sensor, haría falta otra regla con memoria o tiempo; no se supone aquí.

Regla de conteo: `sumar 1 cuando C pasa de 0 a 1`. El contador cuenta detecciones, incluso si M = 0; no cuenta únicamente cajas transportadas. Esa distinción es intencional para no confundir información del sensor con confirmación de movimiento. Inicia el contador N en 0 y el estado anterior de C en 0.

En cada turno: lee H,C,B; calcula M; compara C con su valor anterior y actualiza N; finalmente guarda el C actual para el siguiente turno. Si guardas C antes de compararlo, perderás la transición que quieres reconocer.

| Turno | H | C | B | M | Contador N después del turno |
| --- | --- | --- | --- | --- | --- |
| 1 | 1 | 0 | 0 | 0 | 0 |
| 2 | 1 | 1 | 0 | 1 | 1 |
| 3 | 1 | 1 | 0 | 1 | 1 |
| 4 | 1 | 0 | 0 | 0 | 1 |
| 5 | 1 | 1 | 1 | 0 | 2 |
| 6 | 0 | 0 | 0 | 0 | 2 |
| 7 | 1 | 1 | 0 | 1 | 3 |
| 8 | 1 | 0 | 0 | 0 | 3 |

En el turno 3 no aumenta N porque C sigue en 1. En el 5 se detecta una caja y se cuenta, pero el bloqueo impide ordenar marcha. El contador no demuestra cuántas cajas llegaron al final de la banda. Para confirmar llegadas haría falta, por ejemplo, otra detección ubicada en la salida y una regla definida para ella.

La lógica escrita es solo de proceso. Una protección de personas o un paro de emergencia exige una solución de seguridad apropiada; no se implementa simplemente agregando una variable a esta simulación.

## Cómo realizar la actividad

Usa tarjetas para H, C, B y M; escribe N y C anterior en el pizarrón. Asigna lectores de entradas, controlador y observador. Con cinco alumnos, una persona puede llevar las tres entradas, otra aplicar la regla, otra llevar N, otra representar M y otra verificar. Con más alumnos, cada equipo resuelve antes de mostrar las respuestas.

Ejecuta primero un turno de ejemplo. Luego usa la secuencia D3 del cuadernillo y cambia roles a mitad. Nadie necesita programar ni exponer un tema: deben decidir y explicar con los datos del turno. La actividad funciona también si un solo docente muestra todas las tarjetas.

## Guion para el aula

| Bloque | Minutos | Trabajo |
| --- | ---: | --- |
| 1 Detectar y actuar | 25 | Clasifican dispositivos en D1 y eligen sensor en D2. |
| 2 Del dato a la orden | 20 | Dibuja entradas, PLC, etapa de potencia y motor. Explica un ciclo. |
| 3 Simular y registrar | 50 | Realizan D3 por turnos, cambian roles y comparan resultados. |
| 4 Explicar fallas y cerrar | 40 | Resuelven D4 y D5, corrigen y relacionan fuente, carga, medición, control y sensor. |

Para 105 minutos: 15, 15, 45 y 30 minutos respectivamente. Conserva la secuencia y la diferencia entre detección y movimiento. No añadas software, lenguaje escalera ni conexión física de PLC.

## Respuestas del cuadernillo para el docente

- **D1:** sensor, entrada de información; PLC, controlador; motor, actuador; relevador/contactor adecuado, conmutación en la etapa de potencia; fuente, suministro de energía. La clasificación describe la función en nuestro caso.
- **D2:** sensor fotoeléctrico apropiado al cartón y montaje. Un inductivo detecta principalmente metal; no basta para asumir detección de una caja de cartón sin metal.
- **D3:** M = 0,1,1,0,0,0,1,0; N = 0,1,1,1,2,2,3,3. C anterior inicia en 0. El turno 5 sí suma una detección, aunque no ordene marcha.
- **D4:** a) no, M es una orden; puede faltar alimentación o existir una falla de motor/conexión. b) no, tres lecturas en 1 pueden corresponder a una sola caja. c) cuando H = 0, M = 0; el conteo definido sigue dependiendo de transiciones de C.
- **D5:** aceptar un diagrama coherente con sensor/entradas, regla/controlador, salida/etapa de potencia, motor y alimentación. Debe incluir una predicción comprobable, por ejemplo: si B cambia a 1, M pasa a 0. No exigir símbolos industriales normalizados.

## Cierre del recorrido

Pide que expliquen el caso completo en parejas usando su dibujo, sin memorizar definiciones: de dónde viene la energía, qué la transforma, qué se puede medir, qué detecta la caja y cómo se decide la salida. Si logran justificar esos vínculos, el curso deja una base útil aunque no se desarrollen todos los subtemas del programa original.
