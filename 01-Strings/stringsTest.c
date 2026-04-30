#include "strings.h"
#include "assert.h"
#include <stdlib.h>

int main(void) {

    assert(!IsEmpty("Hi"));
    assert(IsEmpty(""));

    assert(GetLength("Hola") == 4); 
    assert(GetLength("") == 0);
    assert(GetLength("Milhouse") == 8);

    assert(!AreEqual("Hola", "hola"));
    assert(AreEqual("12","12"));
    assert(!AreEqual("Un", "Dos"));

    assert(!AreDecimalDigits("Hola"));
    assert(!AreDecimalDigits("1a"));
    assert(AreDecimalDigits("259"));

    assert(!Contains("Hola", 'h'));
    assert(Contains("Es pacio", ' '));
    assert(!Contains("3a", 'd'));

    assert(ToInteger("123") == 123);
    assert(ToInteger("12A") == -1);
    assert(ToInteger("0") == 0);

    assert(!HasNoNumbers("46"));
    assert(!HasNoNumbers("a6"));
    assert(HasNoNumbers("ab"));

    char* str;
    str = Concatenate("Ho","la");
    assert(AreEqual(str, "Hola")); free(str);
    str = Concatenate("Ho ","la");
    assert(AreEqual(str, "Ho la")); free(str);

    str = Power("pe", 3);
    assert(AreEqual(str, "pepepe")); free(str);

    str = Reverse("Hola");
    assert(AreEqual(str, "aloH")); free(str);


    return 0;
}