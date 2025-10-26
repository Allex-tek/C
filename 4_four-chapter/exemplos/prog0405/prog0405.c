#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 1, num = 1;

    while (num <= 5) {
        while (i <= 10) {
            printf("%d x %2d = %2d\n", num, i, (num * i));
            i++;
        }
        i = 1;
        num++;
        printf("\n");
    }

    printf("\n\n");
    return 0;
}