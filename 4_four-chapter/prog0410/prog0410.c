#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int i = 1, num;

    do {
        num = (2 * i);
        printf("%2d\n", num);
        i++;
    } 
    while (num < 10);
    
    printf("\n\n");
    return 0;
}