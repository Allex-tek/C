#include <stdio.h>
#include <stdlib.h>

int main()
{
    float quilos = 1.0E3, n_toneladas;
    double gramas = 1.0e6;

    printf("Quantas toneladas comprou: ");
    scanf("%f", &n_toneladas);

    printf("Nº de quilos = %f = %e\n", n_toneladas * quilos, n_toneladas * quilos);
    printf("Nº de gramas = %f = %E\n", n_toneladas * gramas, n_toneladas * gramas);
    return 0;
}
