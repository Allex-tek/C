#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    
    int vetor[] = {3, 3, 3, 4, 3, 3, 4, 3};
    int tam = sizeof(vetor) / sizeof(vetor[0]), count = 0, i, j;
    int numRepite, repite = 0;
    
    for (i = 0; i < tam; i++) {

        for (j = i +1; j < tam; j++) {
            if (vetor[i] == vetor[j]) {
                numRepite = vetor[i];
                count++;
                break;
            }
        }
    }
    for (int i = 0; i < tam; i++) {
        if (vetor[i] == numRepite) {
            repite++;
        }
    }
    
    printf("Número: %d\nQtd: %d\nSe repete: %d", numRepite, repite, count);

    printf("\n\n");
    return 0;
}