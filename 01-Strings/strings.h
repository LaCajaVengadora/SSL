#include <stdbool.h>
#ifndef STRINGS_H_INCLUDED
#define STRINGS_H_INCLUDED

bool IsEmpty(char str[]); // returns if str[] is empty
int GetLength(char str[]); // returns str[] length
bool AreEqual(char str1[], char str2[]); // returns if all chars in str1[] are equal to all chars in str2[]
bool AreDecimalDigits(char str[]); // returns if all chars in str[] are decimal chars
bool Contains(char str[], char c); // returns if char c is in str[]
int ToInteger(char str[]); // interpreta una cadena como un entero, asume que la cadena es correcta.
//Una operación a definir libremente.
//Crédito extra: Operaciones de creación ó mutación.
char* Concatenate(char str1[], char str2[]);
char* Power(char str[], int n);
//Una operación a definir libremente.


#endif // STRINGS_H_INCLUDED
