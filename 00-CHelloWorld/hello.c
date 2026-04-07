#include <stdio.h>

int main(void) {
    char text[] = "Hello World from hello.exe";
    FILE* output = fopen("output.txt", "w");
    fputs(text, output);
    fclose(output);
    return 0;
}