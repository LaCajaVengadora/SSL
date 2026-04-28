#include <stdio.h>
#include <stdbool.h>
#include "strings.h"
/* 

bool AreDecimalDigits(char* str);
bool Contains(char c, char* str); // returns if c in str
int ToInteger(char* str); // interpreta una cadena como un entero, asume que la cadena es correcta.
//Una operación a definir libremente.
//Crédito extra: Operaciones de creación ó mutación.
char* Concatenate(char* str1, char* str2);
char* Power(char* str, int n);
//Una operación a definir libremente. */

bool IsEmpty(char str[]) {
    return str[0] == '\0';
}

int GetLength(char str[]) {
    int n = 0;
    while(!IsEmpty(str)) {
        n++; str++; // va a la prox posición del array de chars
    }
    return n;
}
