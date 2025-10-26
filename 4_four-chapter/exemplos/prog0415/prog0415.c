#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    for (i = 0; i <= 255; i++) {
        printf("%3d = %c\n\n",i, (char) i);
    }
    printf("\n\n");
    return 0;
}