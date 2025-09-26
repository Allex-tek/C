#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 5, i = 1;

    while (i <= 10) {
        
        printf("%d x %2d = %2d\n", num, i, (num * i));
        i++;
    }
    printf("\n\n");
    return 0;
}