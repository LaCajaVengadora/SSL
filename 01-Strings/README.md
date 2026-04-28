[Enunciado en GitHub](https://github.com/utn-frba-ssl/operaciones-de-strings/blob/main/operaciones-de-strings.adoc)

# TP - 1: Strings

## PARTE 1 - Análisis Comparativo del Strings en Lenguajes de Programación
Realizar un análisis comparativo de dato String en el lenguaje C versus un lenguaje de programación a elección. El análisis debe contener, por lo menos, los siguientes ítems (e.g.):
1. ¿El tipo es parte del lenguaje en algún nivel?
2. ¿El tipo es parte de la biblioteca?
3. ¿Qué alfabeto usa?
4. ¿Cómo se resuelve la alocación de memoria?
5. ¿El tipo tiene mutabilidad o es inmutable?
6. ¿El tipo es un first class citizen?
7. ¿Cuál es la mecánica para ese tipo cuando se los pasa como argumentos?
8. ¿Y cuando son retornados por una función?
9. ¿Qué nivel de soporte tiene para ASCII, Unicode, y UTF-8?
10. Las anteriores preguntas son disparadores para realizar una análisis comparativo profundo.

## PARTE 2 - Biblioteca para el Tipo String
Desarrollar una biblioteca con operaciones de strings. El desarrollo implica especificar las operaciones e implementar su parte pública y privada.

Operaciones de consulta, no crean ni mutan:
- `IsEmpty`
- `GetLength`
- `AreEqual`
- `AreDecimalDigits`
- `Contains` indica si una cadena dada tiene un caracter dado.
- `ToInteger` que interpreta una cadena como un entero, asume que la cadena es correcta.
- Una operación a definir libremente.
Crédito extra: Operaciones de creación ó mutación.
- `Concatenate`
- `Power`
- Una operación a definir libremente.

El orden del desarrollo es el siguiente:
- Especificación en Strings.md
- Codificación de la interfaz en Strings.h
- Codificación de las pruebas en StringsTest.c
- Implementación en Strings.c

Para debatir en el equipo.
¿Es correcto que ToInteger sea parte de la biblioteca de Strings? ¿Debería ser parte de otra biblioteca implementada en, por ejemplo, Conversion.h y Conversion.c y tener su propio programa de prueba ConversionTest.c?

Restricciones
La especificación matemática debe seguir esta estructura:

*length.asciimath - FILE NOT FOUND*

- Las pruebas deben realizarse con `assert`, deben utilizar literales cadena y no variables, y no deben enviar nada a `stdout` ni a otro flujo.
- Los prototipos deben utilizar const cuando corresponde.
- Las implementaciones de las operaciones de string no deben utilizar funciones estándar, por ejemplo, las declaradas en `<string.h>`
- Por lo menos una operación debe implementarse con recursividad.
- Codificar el Makefile para que el comando `make test` corra los tests.

## Parte 3 -- Programas con argumentos de línea de comando
Esta última parte  consiste en desarrollar una serie de programas que esperan argumentos en su línea de comandos.
Todos los programas envían su salida a `stdout`.

- `enlineas`: Muestra cada argumento en una línea propia.
- `longitudes`: Longitud de cada argumento.
- `mayorlongitud`: Argumento con mayor longitud.
- `todosiguales`: Uno si son todos los argumentos iguales, si no, cero.
- `suma`: suma de todos los argumentos que son enteros en base 10. Variación: signo opcional y otras bases

**Restricciones**
- Se deben usar el o los módulos desarrollados en la anterior parte.
- No se deben usar funciones estándar de cadenas o conversión.
- Para iterar, se debe usar `for`, no `while` y no debe usar variables índice.
- Codificar el `Makefile` de manera que el comando `make` genere todos los ejecutables.

## Tareas
**Parte I:**
Escribir el `AnálisisComparativo.md` con la comparación de strings en C versus otro lenguaje de programación a elección.

La parte pública de la biblioteca se desarrolla en el header `"String.h"`, el cual no debe incluir `<string.h>`.
El programa que prueba la biblioteca, por supuesto, incluye a `"String.h"`.

**Parte II**
- Para cada operación, escribir en `Strings.md` la especificación matemática de la operación, con conjuntos de salida y de llegada, y con especificación de la operación.
- Escribir el `Makefile`.
- Por cada operación:
- - Escribir las pruebas en `StringsTest.c`.
- - Escribir los prototipos en `String.h`.
- - Escribir en `String.h` comentarios con las precondiciones y poscondiciones de cada función, arriba de cada prototipo.
- - Escribir las implementaciones en `Strings.c`.
- Probar con `make test`.

**Parte III:**
Escribir y probar los siguientes programas:
- `enlineas`.
- `longitudes`.
- `mayorlongitud`.
- `todosiguales`.
- `suma`.
- Actualizar `Makefile`.

## Productos
DD-Strings

- readme.md
- AnálisisComparativo.md
- String.md
- Makefile
- StringTest.c
- String.h
- String.c
- Conversion.h     // Depende de la decisión del equipo
- Conversion.c     // Depende de la decisión del equipo
- ConversionTest.c // Depende de la decisión del equipo
- enlineas.c
- longitudes.c
- mayorlongitud.c
- todosiguales.c