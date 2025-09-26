#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    n = 10;

    while (n) {
        printf("%d\n", n);
        n = n - 1;
    }

    printf("\n\n");
    return 0;
}