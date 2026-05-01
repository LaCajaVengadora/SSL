#include <stdio.h>
#include <stdbool.h>
#include "strings.h"

int main(int argc, char *argv[]) {
    bool equal = true;
    for (int i = 2; i < argc; i++) if (!AreEqual(argv[i-1], argv[i])) equal = false;
    printf("Are equal? %d", equal);
    return 0;
}