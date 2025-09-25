#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, taxa;

    printf("Qual o salário: R$ ");
    scanf("%f", &salario);

    /*if (salario > 1000) {
        taxa = 0.05;
    } else {
        taxa = 0.07;
    }
    printf("Novo Salário R$ %.2f", salario + (salario * taxa));
    */

    taxa = salario > 1000 ? 0.05 : 0.07;
    printf("Novo Salário: R$ %.2f", salario + (salario * taxa));

    printf("\n\n");
    return 0;
}