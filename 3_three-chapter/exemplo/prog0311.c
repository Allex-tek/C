#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char est_civil;
    char estado[20] = "";
    
    printf("Informe a letra do seu estado civil (C - casado, S - solteiro, D - divorciado, V - viúvo): ");
    est_civil = getchar();

    if (est_civil == 'C' || est_civil == 'c') {
        strcpy(estado, "CASADO (A)");
    } else if (est_civil == 'S' || est_civil == 's') {
        strcpy(estado, "SOLTEIRO (A)");
    } else if (est_civil == 'D' || est_civil == 'd') {
        strcpy(estado, "DIVOCIADO (A)");
    } else if (est_civil == 'V' || est_civil == 'v') {
        strcpy(estado, "VIÚVO (A)");
    } else {
        strcpy(estado, "DESCONHECIDO");
    }
    printf("\nEstado cívil informado: %s", estado);

    printf("\n\n");
    return 0;
}