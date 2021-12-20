
#Instrucciones de la tarea
Descarga el código del enlace y realiza tres mejoras:

1. **Eliminar la utilización de "goto"**. El uso de goto es algo socorrido, pero conduce a lo que llaman "spaggetti code", entorpeciendo la legibilidad, y haciendo el código menos mantenible en el tiempo.
Revisa el algoritmo y cambia los "goto" por estructuras de repetición

2. Es importante **evitar las repeticiones en el código**. Cuando veas código que se repite en varios sitios , es una invitación a escribir una función o a revisar algo.
Observa por ejemplo que el código que muestra "El ahorcado", "Intentos: Vidas:", "palabra: "... está pidiendo una función.

3. En este código, la gran oportunidad de mejora es adoptar el paradigma de **programación modular** con funciones.
¿Serías capaz de reescribir el código empleando al menos 5 funciones?
Por ejemplo, menu_dificultad(...), leer_letra(...), comprobar_acierto(...), imprime_situacion(...) mensaje_final(...)
