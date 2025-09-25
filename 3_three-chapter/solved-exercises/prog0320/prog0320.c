#include <stdio.h>
#include <stdlib.h>

int main() {
    int dia, mes;
    long ano;

    printf("Forneça o dia: ");
    scanf("%d", &dia);

    printf("Forneça o mês: ");
    scanf("%d", &mes);

    printf("Forneça o ano: ");
    scanf("%ld", &ano);

    if ((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12) && (ano >= 1000 && ano <= 3000)) {
        printf("Data: %d/%d/%ld é válida.", dia, mes, ano);
    } else {
        printf("Data: %d/%d/%ld Invalida.", dia, mes, ano);
    }
    
    printf("\n\n");
    return 0;
}