#include <stdlib.h>
#include <stdio.h>

int main(void)
{

    int vetor[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor do vetor %d: \n", i);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0)
        {
            vetor[i] = 1;
        }
        else
        {
            vetor[i] = 0;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("\nVetor final do vetor %d: |%d|", i, vetor[i]);
    }

    return 0;
}