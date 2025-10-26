#include <stdio.h>
#include <stdlib.h>

int main() {
    int numRamos;

    printf("Digite o Nº de ramos: ");
    scanf("%d", &numRamos);

    for (int i = 0; i < numRamos; i++) {
        for (int j = 0; j < numRamos; j++) {
            if (i >= j)
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}