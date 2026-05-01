#include <stdio.h>
#include "strings.h"

int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) printf("Len del Arg [%d]: %s - %d\n", i, argv[i], GetLength(argv[i]));
    return 0;
}