#include <stdio.h>
#include <stdlib.h>

int main() {
    int horas;
    char tipo;
    long resultado;    

    printf("Digite um determinado números de horas: ");
    scanf("%d", &horas);

    printf("O que mostrar: M/m - minutos | S/s - segundos | D/d - décimos de segundos: ");
    scanf(" %c", &tipo);
    
    if (tipo == 'M' || tipo == 'm') {
        resultado = horas < 0 ? 0 : (horas * 60);
    } else if (tipo == 'S' || tipo == 's') {
        resultado = horas < 0 ? 0 : (horas * 3600L);
    } else if (tipo == 'D' || tipo == 'd') {
        resultado = horas < 0 ? 0 : (horas * 36000L);
    }

    printf("\n\n%dh --> %ld%c", horas, resultado, tipo);

    printf("\n\n");
    return 0;
}