#include <stdio.h>
#include <stdlib.h>

float Pot(float x, int n);

int main() {

    float base;
    int exp;

    printf("Digite a base: ");
    scanf("%f", &base);

    printf("Digite o expoente: ");
    scanf("%d", &exp);

    float res = Pot(base, exp);

    printf("\n\n%2.f", res);

    printf("\n\n");
    return 0;
}

float Pot(float x, int n) {
    int aux = 1;

    for (int i = 1; i <= n; i++) {
        aux *= x;
    }
    return aux;
}