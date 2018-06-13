#include <stdio.h>
#include <stdlib.h>
//construa uma função que ordena um vetor de floats

#define NUMS 8

void ordena(float numeros[], int tam){
    int i;
    int max_atual = tam;
    while(max_atual > 0){
        for(i = 1; i < max_atual; i++){

            if(numeros[i] < numeros[i-1]){
                // troca o anterior com o atual
                float temp = numeros[i];
                numeros[i] = numeros[i-1];
                numeros[i-1] = temp;
            }
        }
        max_atual--;
    }
}

int main()
{
    int i;
    float vec[NUMS];
    for (i = 0; i < NUMS; i++){
        scanf("%f", &vec[i]);
    }
    ordena(vec, NUMS);
    for (i = 0; i < NUMS; i++){
        printf("%.1f, ", vec[i]);
    }
    printf("\n");

    return 0;
}
