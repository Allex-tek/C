#include <stdio.h>
#include <stdlib.h>

int main() {
    int ch;
    printf("Introduza um número entre 0 e 255: ");
    scanf("%d", &ch);

    printf("\nO caracter introduzido: '%d'\nO caracter correspondente é: '%c'\n", ch, (char) ch);
    
    ch += 1;

    printf("\nO inteiro seguinte é: '%d' \nO caracter correspodente é: '%c'\n", ch, (char)(ch));
    
    return 0;
}