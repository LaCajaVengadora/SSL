#include <stdio.h>
#include "strings.h"

int main(int argc, char *argv[]) {
    char* longest = argv[1];
    for (int i = 2; i < argc; i++) 
        if (GetLength(argv[i]) > GetLength(longest)) longest = argv[i];
    printf("Longest arg: %s\nChars: %d\n", longest, GetLength(longest));
    return 0;
}