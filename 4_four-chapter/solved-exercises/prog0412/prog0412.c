#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;
    char letra;

    printf("Introd. dois Nº: ");
    scanf("%d %d", &n1, &n2);

    if(n1 < n2) {
        for (int i = n1; i <= n2; i++) {
            printf("%i --> %c\n", i, i);
        }
    } else {
        for (int i = n1; i >= n2; i--) {
            printf("%i --> %c\n", i, i);
        }
    }
    printf("\n\n");
    return 0;
}