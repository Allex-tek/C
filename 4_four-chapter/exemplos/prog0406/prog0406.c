#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n = 1, num = 1;

    while(num <=5) {
        n = 1;

        while(n <= 10) {
            printf("%2d x %2d = %2d\n", num, n, (num * n));
            n++;
        }
        num++;
        putchar('\n');
    }

    return 0;
}