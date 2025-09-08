#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    printf("Introduza um número inteiro: ");
    scanf("%d", &num);

    if(num != 0) {
        printf("O número %d não é ZERO.", num);
    } else {
        printf("O número %d é igual a ZERO.", num);
    }
    
    printf("\n\n\n");
    return 0;
}