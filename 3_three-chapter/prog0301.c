#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;

    printf("Introduza dois inteiros: ");
    scanf("%d%d", &x, &y);

    printf("O resultado de %d == %d : %d\n", x, y, x == y);
    printf("O resultado de %d > %d : %d\n", x, y, x > y);
    printf("O resultado de %d >= %d : %d\n", x, y, x >= y);
    printf("O resultado de %d < %d : %d\n", x, y, x < y);
    printf("O resultado de %d <= %d : %d\n", x, y, x <= y);
    printf("O resultado de %d != %d : %d\n", x, y, x != y);
    
    printf("\n\n");
    return 0;
}