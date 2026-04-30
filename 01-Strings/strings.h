#include <stdbool.h>
#ifndef STRINGS_H_INCLUDED
#define STRINGS_H_INCLUDED

bool IsEmpty(char str[]); // returns if str[] is empty
int GetLength(char str[]); // returns str[] length
bool AreEqual(char str1[], char str2[]); // returns if all chars in str1[] are equal to all chars in str2[]
bool AreDecimalDigits(char str[]); // returns if all chars in str[] are decimal chars
bool Contains(char str[], char c); // returns if char c is in str[]
int ToInteger(char str[]); // str to int (ToInteger("123") -> 123)
bool HasNoNumbers(char str[]); // returns if no decimal chars
char* Concatenate(char str1[], char str2[]); // returns a new str being str1 ++ str2
char* Power(char str[], int n); // returns a new str being str repeated n times
char* Reverse(char str[]); // returns a new str being str reversed


#endif // STRINGS_H_INCLUDED
