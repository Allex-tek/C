#include <stdio.h>
#include <stdlib.h> 

int main() {
    float salario, taxa;
    

    printf("Qual o salário: ..........R$ ");
    scanf("%f", &salario);

    if (salario < 1000) {
        taxa = .05;
    } else if (salario < 5000) {
        taxa = .11;
    } else {
        taxa = .35;
    }
    printf("\n\nSalário Bruto: ...........R$ %.2f", salario);
    printf("\nImposto: .................R$ %.2f", (salario * taxa));
    printf("\nSalário líquido: .........R$ %.2f", (salario - (salario * taxa)));
    
    printf("\n\n\n");
    return 0;
}