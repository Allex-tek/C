#include <stdio.h>
#include <stdlib.h>

void linhaAsteriscos() {
    for (int i = 1; i <= 20; i++) {
        putchar('*');
    }
    putchar('\n');
}

int main() {
    
    linhaAsteriscos();
    printf("Números entre 1 e 5\n");
    linhaAsteriscos();

    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
    
    linhaAsteriscos();
    
    printf("\n\n");
    return 0;
}