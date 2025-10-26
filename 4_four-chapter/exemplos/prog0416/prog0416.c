#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, num;
    printf("Digite um número: ");
    scanf("%d", &num);

    for (i = 1, j = num; i <= num; i++, j--) {
        printf("%3d %3d\n", i, j);
    }
    printf("\n\n");
    return 0;
}