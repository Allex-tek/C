#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, imp;

    printf("Qual seu salário: R$ ");
    scanf("%f", &salario);

    if (salario <= 0) {
        printf("Salário negativado...\n");
    } else if (salario > 1000) {
        imp = (salario * 0.10);
        printf("Imposto a pagar 10%%: R$ %.2f", imp);
    } else {
        imp = (salario * 0.05);
        printf("Imposto a pagar 5%%: R$ %.2f", imp);
    }
    
    
    printf("\n\n\n");
    return 0;
}