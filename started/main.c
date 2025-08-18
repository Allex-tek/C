#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;

    printf("Introduza o primeiro Nº: ");
    scanf("%d", &n1);
    printf("Introduza o segundo Nº: ");
    scanf("%d", &n2);

    printf("O resultado de %d + %d = %d\n", n1, n2, n1+n2);

    return 0;
}
