#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%2d * %2d = %2d\n", i, j, (i * j));
        }
        if (i != 5) {
            printf("Presione <ENTER> para continuar...");
            getchar();
        }
    }
    
    printf("\n\n");
    return 0;
}