#include <stdio.h>
#include "strings.h"

int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) printf("Arg [%d]: %s\n", i, argv[i]);
    return 0;
}