#include <stdio.h>
#include <stdlib.h>

void linhaAsteriscos(int numAsteriscos) {
    for (int i = 1; i <= numAsteriscos; i++) {
        putchar('*');
    }
    putchar('\n');
}

int main() {
    
    linhaAsteriscos(3);
    linhaAsteriscos(5);
    linhaAsteriscos(7);
    linhaAsteriscos(5);
    linhaAsteriscos(3);

    printf("\n\n");
    return 0;
}
