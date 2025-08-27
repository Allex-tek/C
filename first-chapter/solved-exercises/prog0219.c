#include <stdio.h>
#include <stdlib.h>

int main() {
    double num;

    printf("Introduza um número real: ");
    scanf("%lf", &num);

    int parteInteira = (int) num;
    float  parteFracionaria = num - ((int) num);
    printf("Parte inteira: %d\n", parteInteira);
    printf("Parte fracionária: %.2lf\n\n", parteFracionaria);
    
    return 0;
}