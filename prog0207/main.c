#include <stdio.h>
#include <stdlib.h>

int main() {

    float raio, perimetro;
    double Pi = 3.1415927, area;

    printf("Introduza o raio da Circunferência: ");
    scanf("%f",&raio);

    area = Pi * raio * raio;
    perimetro = 2 * Pi * raio;

    printf("Área = %f\nPerimetro = %f\n\n", area, perimetro);

    return 0;
}
