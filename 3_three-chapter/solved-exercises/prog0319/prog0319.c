#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[20];
    int dias, mes;

    printf("Forneça o número do mês: ");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1: printf("Janeiro tem %d dias", dias = 31);
        break;
    case 2: printf("Fevereiro tem %d dias", dias = 28);
        break;
    case 3: printf("Março tem %d dias", dias = 31);
        break;
    case 4: printf("Abril tem %d dias", dias = 30);
        break;
    case 5: printf("Maio tem %d dias", dias = 31);
        break;
    case 6: printf("Junho tem %d dias", dias = 30);
        break;
    case 7: printf("Julho tem %d dias", dias = 31);
        break;
    case 8: printf("Agosto tem %d dias", dias = 31);
        break;
    case 9: printf("Setembro tem %d dias", dias = 30);
        break;
    case 10: printf("Outubro tem %d dias", dias = 31);
        break;
    case 11: printf("Novembro tem %d dias", dias = 30);
        break;
    case 12: printf("Dezembro tem %d dias", dias = 31);
        break;
    default: printf("Mês invalido");
        break;
    }
    printf("\n\n");
    return 0;
}