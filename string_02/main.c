#include <stdio.h>
#include <stdlib.h>

#define TAM 12

int main()
{
    char frase[TAM];
    fgets(frase, TAM, stdin);
    int idx, idx2;
    int fim = 0;
    int palindromo = 1;
    for(idx = 0; idx < TAM-1; idx++)
    {
        if(frase[idx] == '\n')
        {
            frase[idx] = '\0';
            break;
        }
    }

    fim = --idx;
    for(idx2 = 0; idx2 < fim; idx2++, idx--)
    {
        if(frase[idx] != frase[idx2])
        {
            palindromo = 0;
            break;
        }
    }
    if(palindromo)
    {
        printf("palindromo\n");
    }
    else
    {
        printf("nao palindromo\n");
    }
    return 0;
}
