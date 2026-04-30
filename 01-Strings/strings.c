#include <stdio.h>
#include <stdlib.h>
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
    bool equal = true;
    while (equal && !IsEmpty(str1) && !IsEmpty(str2))
        if (*str1++ != *str2++ || IsEmpty(str1) != IsEmpty(str2)) equal = false;
    return equal;
}

bool AreDecimalDigits(char str[]) {
    int decimalCant =0, len = GetLength(str);
    for (int i = 0; i < len; i++) if (isdigit(str[i])) decimalCant++;
    return decimalCant == len;
}

bool Contains(char str[], char c) {
    int len = GetLength(str);
    bool isIn = false;
    for (int i = 0; i < len && !isIn; i++) if (str[i] == c) isIn = true;
    return isIn;
}

int ToInteger(char str[]) {
    int len = GetLength(str);
    if (!AreDecimalDigits(str)) return -1;
    int num = 0;
    for (int i = 0; i < len; i++) num = (num * 10) + ((int)str[i]-48); //48 es la posición del 0 en ASCII
    return num;
}

//extra
bool HasNoNumbers(char str[]) {
    int len = GetLength(str);
    bool noNum = true;
    for (int i = 0; i < len; i++) if (isdigit(str[i])) noNum = false;
    return noNum;
}

char* Concatenate(char str1[], char str2[]) {
    int len1 = GetLength(str1), len2 = GetLength(str2);
    char* both = malloc(sizeof(char) * (len1 + len2 + 1)); // +1 para el '\0'
    for(int i = 0; i < len1; i++) both[i] = str1[i];
    for(int j = 0; j <= len2; j++) both[j + len1] = str2[j]; // <= para incluir '\0'
    return both;
}

char* Power(char str[], int n) {
    int len = GetLength(str);
    char* full = malloc(sizeof(char) * (n * len + 1));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < len; j++) full[j + len * i] = str[j];
    }
    full[n * len] = '\0';
    return full;
}

char* Reverse(char str[]) {
    int len = GetLength(str);
    char* reversed = malloc(sizeof(char) * (len + 1));
    for (int i = 0; i < len; i++) reversed[i] = str[len-i-1]; // para no arrancar desde '\0'
    reversed[len] = '\0';
    return reversed;
}