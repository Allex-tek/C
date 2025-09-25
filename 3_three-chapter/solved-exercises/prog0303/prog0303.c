#include <stdio.h>
#include <stdlib.h>

int main() {
    int horas;
    long resultado;
    char tipo;

    printf("Nº de horas: ");
    scanf("%d", &horas);

    printf("O que mostrar (M/m - minutos | S/s - segundos | D/d - décimo de segundos: ) ");
    scanf(" %c", &tipo);

    switch (tipo)
    {
    case 'M':
    case 'm': resultado = (horas < 0 ? 0 : (horas * 60L));
        break;
    case 'S':
    case 's': resultado = (horas < 0 ? 0 : (horas * 3600L));
        break;
    case 'D':
    case 'd': resultado = (horas < 0 ? 0 : (horas * 36000L));
        break;
    default: printf("Tipo incorreto!!");
        break;
    }
    printf("%dh --> %ld%c", horas, resultado, tipo);
    
    printf("\n\n");
    return 0;
}