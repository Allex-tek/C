#include <stdio.h>
#include <stdlib.h>

int main() {
    int ano, x, y, z;

    printf("Forneça o ano: ");
    scanf("%d", &ano);
    
    x = ano % 4;
    y = ano  % 100;
    z = ano % 400;
    printf("X = %d -- Y = %d -- Z = %d\n\n", x, y, z);

    if ((x == 0 && y != 0) || z == 0) {
        printf("ANO (%d) É BISSEXTO!!!", ano);
    } else {
        printf("ANO (%d) NÃO É BISSEXTO!!!", ano);
    }

    printf("\n\n");
    return 0;
}