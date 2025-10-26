#include <stdio.h>
#include <stdlib.h>

int main() {
    int j, i, num;
    char caracter;

    printf("Digite um Nº: ");
    scanf("%d", &num);

    printf("Digite um caracter: ");
    scanf(" %c", &caracter);

    for(i = 0; i < num; i++) {
        for (j = 0; j < num; j++) {
            printf("%c ", caracter);
        }
        printf("\n");
    }


    printf("\n\n");
    return 0;
}