#include <stdio.h>
#include <stdlib.h>

int somar(int x, int y) {
    return x + y;
}

int dobro(int x) {
    return x * 2;
}

int main() {
    int num1, num2, res;

    printf("Digite um Nº: ");
    scanf("%d", &num1);
    
    printf("Digite outro Nº: ");
    scanf("%d", &num2);

    res = somar(num1, num2);

    printf("Resultado da soma: %d\n", res);
    printf("O dobro dos números: %2d = %2d - %2d = %2d", num1, dobro(num1), num2, dobro(num2));

    printf("\n\n");
    return 0;
}
