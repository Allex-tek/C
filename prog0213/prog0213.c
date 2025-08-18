#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;
    printf("Introduza um caracter: ");
    scanf("%c", &ch);

    printf("O caractere '%c' tem o ASCII Nº %d\n", ch, (int) ch);
    
    return 0;
}