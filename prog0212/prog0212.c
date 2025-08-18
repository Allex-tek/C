#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch1, ch2;

    printf("Introduza o primeiro caracter: ");
    scanf("%c", &ch1);

    printf("Introduza o segundo caracter: ");
    scanf(" %c", &ch2);

    printf("Os caracteres: 1 -> '%c' : 2 -> '%c'\n", ch1, ch2);

    return 0;
}