/* Bubblesort */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 10

int main()
{
    setlocale(LC_ALL, "");

    int numeros[TAM];
    int i, aux, contador;

    printf("Digite 10 números para preencher o array: \n");

    for (i = 0; i < TAM; i++)
    {
        scanf("%d", &numeros[i]);
    }

    printf("Ordem atual dos números: \n");

    for (i = 0; i < TAM; i++)
    {
        printf("%4d", numeros[i]);
    }

    // Algoritmo de ordenação Bubblesort

    for (contador = 1; contador < TAM; contador++)
    {
        for (i = 0; i < TAM - 1; i++)
        {
            if (numeros[i] > numeros[i + 1])
            {
                aux = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = aux;
            }
        }
    }

    printf("\nNúmeros ordenados pelo bubblesort: \n");

    for (i = 0; i < TAM; i++)
    {
        printf("%4d", numeros[i]);
    }

    return 0;
}
