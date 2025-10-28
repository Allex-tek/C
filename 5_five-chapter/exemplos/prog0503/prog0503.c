#include <stdio.h>
#include <stdlib.h>

void caractere(int num, char ch) {
    for (int i = 0; i<= num; i++) {
        putchar(ch);
    }
    putchar('\n');
}


int main() {
    caractere(3, '*');
    caractere(5, '-');
    caractere(7, '+');
    caractere(5, '.');
    caractere(3, '/');

    printf("\n\n");
    return 0;
}