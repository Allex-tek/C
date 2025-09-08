#include <stdio.h>
#include <stdlib.h>

int main() {
    char estCivil;

    printf("Digite a letra para o estado civil - (C/c - casado), (S/s - solteiro), (D/d - divociado), (V/v - viúvo): ");
    estCivil = getchar();

    switch (estCivil)
    {
    case 'C':
    case 'c': printf("Casado");
        break;
    case 'S':
    case 's': printf("Solteiro");
        break;
    case 'D':
    case 'd': printf("Divociado");
        break;
    case 'V':
    case 'v': printf("viuvo");
        break;
    default: printf("Estado civil incorreto");
        break;
    }

    
    printf("\n\n");
    return 0;
}