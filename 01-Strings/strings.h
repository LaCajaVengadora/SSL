#include <stdbool.h>
#ifndef STRINGS_H_INCLUDED
#define STRINGS_H_INCLUDED

bool IsEmpty(char* str);
int GetLength(char* str);
bool AreEqual(char* str1, char* str2);
bool AreDecimalDigits(char* str);
bool Contains(char c, char* str); // returns if c in str
int ToInteger(char* str); // interpreta una cadena como un entero, asume que la cadena es correcta.
//Una operación a definir libremente.
//Crédito extra: Operaciones de creación ó mutación.
char* Concatenate(char* str1, char* str2);
char* Power(char* str, int n);
//Una operación a definir libremente.


#endif // STRINGS_H_INCLUDED
