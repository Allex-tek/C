#include <stdio.h>
#include <stdlib.h>

int main()
{
    short int idade;
    int montante;
    long int numeroConta;

    printf("Qual sua idade: ");
    scanf("%hd", &idade);

    printf("Qual seu montante a depositar: R$ ");
    scanf("%d", &montante);

    printf("Qual Nº de conta: ");
    scanf("%ld", &numeroConta);

    printf("Uma pessoa de %hd anos depositou R$ %d na conta %ld\n", idade, montante, numeroConta);

    return 0;
}
