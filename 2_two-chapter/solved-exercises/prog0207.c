#include <stdio.h>
#include <stdlib.h>

int main() {
    int dia, mes, ano;

    printf("Digite uma data separada por espaço: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    printf("Data: %02d/%02d/%04d\n\n", dia, mes, ano);

    return 0;
}