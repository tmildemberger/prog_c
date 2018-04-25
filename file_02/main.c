#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//quais são as vinte palavras do texto
//isolar as palavras
//contar as aparições de palavras
//ver quais mais aparecem

typedef char palavra[20];

int main()
{
    FILE *arq;
    arq = fopen("teste.txt", "rt");

    if(arq)
    {
//        char texto[65536];
//        int qtde;
//        qtde = fread(texto, 1, 65535, arq);
//        texto[qtde] = '\0';
        palavra lista[400];
        int palavras;
        int i;
        for(palavras = 0; palavras < 400; palavras++)
        {
            if(fscanf(arq, "%s", lista[palavras]) == EOF) break;
        }
        for(i = 0; i < palavras; i++)
        {
            printf("%s", lista[i]);
        }
    }
    fclose(arq);
    return 0;
}
