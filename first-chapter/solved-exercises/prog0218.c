#include <stdio.h>
#include <stdlib.h>

int main() {
    long int seconds;

    printf("Enter with number seconds: ");
    scanf("%ld", &seconds);

    printf("Horas: '%d'\n", (int) seconds / 3600);
    printf("Minutos: '%d'\n", (int) (seconds % 3600/60));
    printf("Segundos: '%d'", (int) (seconds % 60));
    
    
    printf("\n\n");
    return 0;
}