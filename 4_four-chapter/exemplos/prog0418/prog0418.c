#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, num;

    printf("Introduza um Nº: ");
    scanf("%d", &num);

    for (int i = num; ; i++) {
        
        if (i % 10 == 0) {
            break;
        }
        else if (!(i % 3 == 0)) {
            printf("%d\n", i);
        }
    }
    
    printf("\n\n");
    return 0;
}