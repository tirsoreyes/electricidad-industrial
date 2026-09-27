# Electricidad industrial para cuatro sesiones

Material docente para un grupo de 5 a 15 alumnos, con pizarrón como recurso principal. Parte desde cero y emplea operaciones aritméticas sencillas. No requiere internet, proyector, computadora ni compras para completar las actividades. La calculadora del celular es suficiente.

## Archivos y orden de trabajo

1. [Electricidad básica](01-electricidad-basica.md): entender un circuito, calcular y medir.
2. [Motores y transformadores](02-motores-transformadores.md): distinguir alimentación, movimiento y control.
3. [Electrónica y lógica](03-electronica-logica.md): reconocer componentes y tomar decisiones con condiciones.
4. [Sensores y PLC](04-sensores-control-plc.md): integrar lo anterior en una simulación de una banda transportadora.

El [cuadernillo para alumnos](alumnos/cuadernillo-actividades.docx) contiene dos páginas por módulo. Las respuestas están en cada MD, no en el cuadernillo. Puede imprimirse por partes o copiarse al pizarrón. Para la primera sesión no hace falta encargar impresiones anticipadamente; las consignas caben en el cuaderno.

## Distribución flexible

Los módulos no equivalen a semanas. Avanza en este orden y detente al concluir una actividad. Hay **600 minutos de trabajo central** y **120 minutos de margen** dentro de las cuatro sesiones de tres horas.

| Módulo | Trabajo central | Recorrido reducido si se pierde tiempo |
| --- | ---: | ---: |
| 1 Electricidad básica | 210 min | 150 min |
| 2 Motores y transformadores | 105 min | 75 min |
| 3 Electrónica y lógica | 150 min | 105 min |
| 4 Sensores y PLC | 135 min | 105 min |
| Total | 600 min | 435 min |

Una distribución posible: sábado 1, primeros 150 minutos del módulo 1; sábado 2, sus 60 minutos restantes y 90 del módulo 2; sábado 3, 15 del módulo 2 y 135 del módulo 3; sábado 4, 15 del módulo 3 y 135 del módulo 4. Quedan 30 minutos por sábado para descanso, organización, dudas o interrupciones. La quinta sesión queda fuera de este material y la sexta se conserva como holgura. No se fijan instrumentos, porcentajes ni criterios de evaluación.

Si se pierde una sesión completa, usa los recorridos reducidos: 435 minutos caben en tres sesiones dejando 105 minutos de margen. Conserva medición segura, Ohm, potencia, lógica y simulación; recorta ampliaciones. No conviertas lo pendiente en una tarea larga.

## Cómo preparar y conducir cada clase

Lee primero la explicación del módulo y resuelve tú el ejemplo sin mirar la respuesta. Ensaya la demostración antes de llevarla. Durante la clase alterna explicaciones de 10 a 15 minutos con predicciones, dibujos y ejercicios. Los tiempos de las tablas incluyen conversación y corrección, no solo exposición del docente.

Trabaja en parejas o tríos; con cinco alumnos puede participar todo el grupo. Cambien los papeles de quien calcula, quien dibuja y quien explica. Las preguntas de cierre sirven para detectar dudas y retomar, sin asignar calificaciones. No hay tarea obligatoria: basta con pedir la impresión del módulo siguiente y, opcionalmente, observar una etiqueta accesible sin abrir ni desconectar equipos.

## Preparación del material físico

Lleva tu multímetro con puntas en buen estado, una pila AA o AAA de 1.5 V en buen estado, dos trozos de un conductor UTP de unos 20 a 30 cm, cinta y tarjetas de papel. Prepara los extremos pelados antes de la clase y evita puntas salientes. Usa el UTP totalmente separado de computadoras, routers, switches y equipos PoE. Si no hay pilas AA o AAA, realiza la práctica de continuidad y deja el voltaje como ejercicio escrito.

En este curso el UTP se usa solamente para continuidad, sin pilas conectadas. No se usa para alimentar motores, hacer extensiones ni experimentar con contactos de pared. Las demostraciones físicas son de voltaje de una pila y continuidad de un conductor suelto; los demás circuitos son dibujos. No unas directamente los polos de una pila: incluso una pila pequeña puede calentar un cable en cortocircuito.

No necesitas comprar componentes. Si después se consiguen resistencias y LED, se podrá añadir un montaje adecuado, pero no forma parte del recorrido necesario. No improvises un LED conectado directamente a una pila ni abras cargadores para mostrar su interior.

## Caso que conecta los módulos

Un pequeño negocio quiere mover cajas por una banda y contarlas. Se estudiará una maqueta hipotética de 12 V de corriente directa, exclusivamente en papel: un motor mueve la banda, un sensor detecta cajas y una lógica determina cuándo debe funcionar. Los números de los ejercicios son didácticos, no especificaciones para construir una máquina.

## Alcance frente al programa

El PDF original se conserva sin cambios. Se profundiza en los fundamentos que permiten resolver problemas simples. Faraday y Lenz se explican cualitativamente; motores de CA, trifásica, SCR y TRIAC se presentan por su función. No se desarrollan diseño de instalaciones, conexiones de motores de red, programación real de PLC ni sumadores digitales. Temporizadores y contadores se representan con tarjetas y secuencias.

La referencia R.O.I.E. del programa se contextualiza en el módulo 2 con una fuente oficial actual. El renglón que une LED y transistor se divide en dos conceptos. Las fuentes de consulta están al final de los módulos; son apoyo para el docente y no lecturas obligatorias para los alumnos.
