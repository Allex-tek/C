#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 1, n;

    printf("Forneça um Nº: ");
    scanf("%d", &n);

    while (i <= 10) {
        printf("%2d x %2d = %2d\n", n, i, (n * i));
        i++;
    }
    
    printf("\n\n");
    return 0;
}