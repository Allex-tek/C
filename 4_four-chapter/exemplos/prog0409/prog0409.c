#include <stdio.h>
#include <stdlib.h>

int main() {
    char menu;

    do {
        printf("1 - Clientes\n2 - Fornecedores\n3 - Encomendas\n0 - Sair\n\nOPÇÃO: ");
        scanf(" %c", &menu);
        fflush(stdin); /* Limpa o buffer do teclado */

        switch (menu)
        {
        case '1': puts("Opção CLIENTES\n\n");
            break;
        case '2': puts("Opção FORNECEDORES\n\n");
            break;
        case '3': puts("Opção ENCOMENDAS\n\n");
            break;
        case '0': puts("Opção Sair...\n\n");
            break;
        default: puts("Opção INVALIDA!!!\n\n");
            break;
        }
        getchar();
    }
    while (menu != '0');
    
    printf("\n\n");
    return 0;
}