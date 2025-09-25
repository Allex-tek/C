#include <stdio.h>
#include <stdlib.h>

int main() {
    int horas;
    long segundos;

    printf("Informe um determinados números de horas: ");
    scanf("%d", &horas);

    segundos = horas < 0 ? 0 : (horas * 3600L);

    printf("\nA quantidade de %dH, tem %ld segundos", horas, segundos);
    
    printf("\n\n");
    return 0;
}