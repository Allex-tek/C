#include <stdio.h>
#include <stdlib.h>

int main() {
    double bonus = 1000, salarioBase = 100000, salario;

    printf("Qual é o seu salário? R$ ");
    scanf("%lf", &salario);

    if(salario < salarioBase) {
        salario = salario + bonus;
    }
    printf("\n\nSeu salário é: R$ %.2f", salario);

    printf("\n\n\n");
    return 0;
}