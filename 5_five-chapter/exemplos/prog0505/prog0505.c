#include <stdio.h>
#include <stdlib.h>

int max(int n1, int n2);

int main() {
    int n1, n2;
    printf("Digite um Nº: ");
    scanf("%d", &n1);

    printf("Digite outro Nº: ");
    scanf("%d", &n2);

    int res = max(n1, n2);
    
    printf("\nMaior: %d", res);

    printf("\n\n");
    return 0;
}

int max(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}