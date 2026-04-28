#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include "strings.h"
/* 

bool Contains(char c, char* str); // returns if c in str
int ToInteger(char* str); // interpreta una cadena como un entero, asume que la cadena es correcta.
//Una operación a definir libremente.
//Crédito extra: Operaciones de creación ó mutación.
char* Concatenate(char* str1, char* str2);
char* Power(char* str, int n);
//Una operación a definir libremente. */

bool IsEmpty(char str[]) {
    return *str == '\0';
}

int GetLength(char str[]) {
    int n = 0;
    while (!IsEmpty(str)) {
        n++; str++; // va a la prox posición del array de chars
    }
    return n;
}

bool AreEqual(char str1[], char str2[]) {
    int lenght1 = GetLength(str1), lenght2 = GetLength(str2);
    if (lenght1 != lenght2) return false;
    bool equal = true;
    for (int i = 0; i < lenght1 && equal; i++) if (str1[i] != str2[i]) equal = false;
    return equal;
}


bool AreDecimalDigits(char str[]) {
    int decimalCant = 0, lenght = GetLength(str);
    for (int i = 0; i < lenght; i++) if (isdigit(str[i])) decimalCant++;
    return decimalCant == lenght;
}

bool Contains(char str[], char c) {
    int lenght = GetLength(str);
    bool isIn = false;
    for (int i = 0; i < lenght && !isIn; i++) if (str[i] == c) isIn = true;
    return isIn;
}