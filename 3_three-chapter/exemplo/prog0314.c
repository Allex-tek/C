#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, resultado;
    char operacao;
    printf("Entre com dois numeros inteiros, separados por espaço: ");
    scanf("%d %d", &num1, &num2);

    printf("Escolha a operação: ");
    scanf(" %c", &operacao);

    switch (operacao)
    {
    case '+': resultado = num1 + num2;
        break;
    case '-': resultado = num1 - num2;
        break;
    case '*':
    case 'x':
    case 'X': resultado = num1 * num2;
        break;
    case '/':
    case '\\':
    case ':': resultado = num1 / num2;
        break;
    default: resultado = -1;
        break;
    }
    if (resultado != -1) {
        printf ("\nResultado: %d %c %d = %d", num1, operacao, num2, resultado);
    } else {
        printf("\n\nOperação invalida!!!");
    }

    printf("\n\n");
    return 0;
}