#include "strings.h"
#include "assert.h"

int main(void) {
    assert(!IsEmpty("Hi")); assert(IsEmpty(""));
    assert(GetLength("Hola") == 4); assert(GetLength("") == 0); assert(GetLength("Milhouse") == 8);
    return 0;
}