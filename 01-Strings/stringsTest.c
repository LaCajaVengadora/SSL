#include "strings.h"
#include "assert.h"

int main(void) {
    assert(!IsEmpty("Hi")); assert(IsEmpty(""));
    assert(GetLength("Hola") == 4); assert(GetLength("") == 0); assert(GetLength("Milhouse") == 8);
    assert(!AreEqual("Hola", "hola")); assert(AreEqual("0","0")); assert(!AreEqual("Un", "Dos"));
    assert(!AreDecimalDigits("Hola")); assert(!AreDecimalDigits("1a")); assert(AreDecimalDigits("259"));
    assert(!Contains("Hola", 'h')); assert(Contains("Es pacio", ' ')); assert(Contains("3a", '3'));
    return 0;
}