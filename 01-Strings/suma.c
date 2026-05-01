#include <stdio.h>
#include "strings.h"

int main(int argc, char *argv[]) {
    int suma = 0;
    for (int i = 1; i < argc; i++) suma += ToInteger(argv[i]);
    printf("Suma: %d", suma);
    return 0;
}