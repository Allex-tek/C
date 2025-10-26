#include <stdio.h>
#include <stdlib.h>

int main() {
    int linha = 0;

    char ch;

    for (int i = 1; i <= 255; i++) {

        
        if (linha == 20) {
            
            do {
                printf("Digite 'c' ou 'C', e em seguida <ENTER> para continuar: ");
                scanf(" %c", &ch);

            } while ((ch != 'c') && (ch != 'C'));
            linha = 0;
        }
        printf("%d --> %c\n", i, i);
        linha++;

    }

    printf("\n\n");
    return 0;
}