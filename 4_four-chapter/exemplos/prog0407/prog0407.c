#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, num, soma, produto;
    
    printf("Digite um números natural: ");
    scanf("%d", &num);

    for(soma = 0, n = produto = 1; n <= num; n++) {
        soma = soma + n;
        produto = produto * n;
    }

    printf("Soma = %2d\nProduto = %2d", soma, produto);

    printf("\n\n");
    return 0;
}