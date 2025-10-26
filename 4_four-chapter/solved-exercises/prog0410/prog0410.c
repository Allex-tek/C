#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    do {
        
        printf("Forneça um Nº entre 1 e 100: ");
        scanf("%d", &num);
    }
    while ((num < 1) || (num > 100));
    


    printf("\n\n");
    return 0;
}