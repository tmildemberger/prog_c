#include <stdio.h>
#include <stdlib.h>
// construa uma função que determine o 3º maior
// número entrado pelo usuário
// a) usar a função anterior
// b) o vetor original deve ser mantido na ordem original

#define NUMS 8

void ordena(float numeros[], int tam)
{
    int i;
    int max_atual = tam;
    while(max_atual > 0)
    {
        for(i = 1; i < max_atual; i++)
        {

            if(numeros[i] < numeros[i-1])
            {
                // troca o anterior com o atual
                float temp = numeros[i];
                numeros[i] = numeros[i-1];
                numeros[i-1] = temp;
            }
        }
        max_atual--;
    }
}

float terceiro(float vec[], int tam)
{
    float copy[tam];
    int i;
    for (i = 0; i < tam; i++)
    {
        copy[i] = vec[i];
    }

    ordena(copy, tam);
    if (tam > 2)
    {
        return copy[tam - 3];
    }
    else
    {
        return -1.0;
    }
}

int main()
{
    int i;
    float vec[NUMS];
    for (i = 0; i < NUMS; i++)
    {
        scanf("%f", &vec[i]);
    }

    ordena(vec, NUMS);

    for (i = 0; i < NUMS; i++)
    {
        printf("%.2f, ", vec[i]);
    }

    printf("\n%.2f\n", terceiro(vec, NUMS));

    return 0;
}
