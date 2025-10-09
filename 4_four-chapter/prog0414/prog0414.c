#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
            if (j == i)
            {
                break; // Já depois de escrever j
            }
        }
        putchar('\n');
    }

    printf("\n\n");
    return 0;
}