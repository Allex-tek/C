#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;

    printf("Introduza um número: ");
    scanf("%d", &x);

    if (x >= 0) {
        printf("Número %d é um Positivo\n", x);
    } else {
        printf("Número %d é um Negativo\n", x);
    }
    
    printf("\n\n\n");
    return 0;
}