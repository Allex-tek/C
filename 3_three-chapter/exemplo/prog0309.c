#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, taxa;
    char est_civil;

    printf("Qual o seu salário: R$ ");
    scanf("%f", &salario);

    printf("Qual seu estado cívil? C/c para casado | S/s para solteiro: ");
    scanf(" %c", &est_civil);

    if (est_civil == 'C' || est_civil == 'c') {
        taxa = 0.09;
    } else if (est_civil == 'S' || est_civil == 's') {
        taxa = 0.10;
    } else {
        printf("Estado civil incorreto!!!");
    }
    printf("Imposto: R$ %.2f", (salario * taxa));

    printf("\n\n");
    return 0;
}