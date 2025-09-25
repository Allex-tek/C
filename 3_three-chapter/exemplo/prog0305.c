#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, temp;

    printf("Digite dois números: ");
    scanf("%d %d", &x, &y);

    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }

    printf("%d, %d", x, y);

    printf("\n\n");
    return 0;
}