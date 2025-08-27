#include <stdio.h>
#include <stdlib.h>

int main(){
    int dia, mes, ano;

    printf("Digite uma data no formato ano-mes-dia, separado por espaço: ");
    scanf("%d %d %d", &ano, &mes, &dia);
    
        printf("Data: %02d/%02d/%04d\n\n", dia, mes, ano);

    return 0;
}