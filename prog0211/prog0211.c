#include <stdio.h>
#include <stdlib.h>

int main () {
    char ch;

    printf("Introduza um caractere: ");
    ch = getchar();

    printf("O caractere introduzido foi : '%c'\n", ch);
    return 0;
}