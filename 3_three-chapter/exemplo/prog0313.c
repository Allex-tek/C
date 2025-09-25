#include <stdio.h>
#include <stdlib.h>

int main() {
    double valor, taxa = 0.0, imposto;
    char genero;

    printf("Digite o valor do salário: R$ ");
    scanf(" %lf", &valor);

    printf("\nDigite o genero (H/h - Homem) ou (M/m - Mulher): ");
    scanf(" %c", &genero);

    switch (genero)
    {
        case 'H':
        case 'h': taxa = (0.10 + 0.05);
            break;
        case 'M':
        case 'm': taxa = 0.10;
            break;
    }
    imposto = (valor * taxa);

    printf("\nImposto R$ %.2f", imposto);

    printf("\n\n");
    return 0;
}