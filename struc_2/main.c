#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//quais são as vinte palavras do texto
//isolar as palavras
//contar as aparições de palavras
//ver quais mais aparecem

//com funcoes
#define QUANTOS 10

typedef char palavra_t[20];

typedef struct {
    palavra_t palavra;
    int aparicoes;
} coisa_t;

char texto[1024];

coisa_t lista[400];

int abre_arquivo_e_le_texto(void){
    FILE *f = fopen("teste.txt", "r");

    //se não consegue abrir o arquivo, retorna 1
    if(f == NULL) return 1;

    int qtde;
    qtde = fread(texto, 1, 1024, f);
    texto[qtde] = '\0';

    //sucesso
    fclose(f);
    return 0;
}

void separa_em_palavras(void){

//    int onde_estou = 0;
//
//    int deu_pra_ler = 0;
//    for(palavras = 0; palavras < 400; palavras++)
//    {
//        deu_pra_ler = sscanf(&(texto[onde_estou]), "%s", lista[palavras]);
//        if( deu_pra_ler == EOF ) break;
//        tamanho = strlen(lista[palavras]);
//        onde_estou += tamanho + 1; printf("%s tem tamanho %d\n", lista[palavras], tamanho);
//    }

    int palavras = 0;
    int tamanho = 0;
    int ultimo_foi_palavra = 0;
    int i = 0;
    for (i = 0; texto[i] != '\0'; i++){
        if (isalpha(texto[i])){
            ultimo_foi_palavra = 1;
            tamanho++;
        } else if (ultimo_foi_palavra == 1){
            strncpy(lista[palavras].palavra, &texto[i-tamanho], tamanho);
            palavras++;
            tamanho = 0;
            ultimo_foi_palavra = 0;
        }
    }
    if(ultimo_foi_palavra == 1){
        strncpy(lista[palavras].palavra, &texto[i-tamanho], tamanho);
        palavras++;
        tamanho = 0;
        ultimo_foi_palavra = 0;
    }

    //só para testar
//    for(i = 0; i < palavras; i++)
//    {
//        printf("%s", lista[i].palavra);
//    }
}

void conta_aparicoes(void){
    int i, j;
    palavra_t atual;
    for(i = 0; i < 400; i++){
        strcpy(atual, lista[i].palavra);
        if(strcmp(atual, "") == 0) continue;
        lista[i].aparicoes = 1;
        for(j = i+1; j < 400; j++){
            if(strcmp(atual, lista[j].palavra) == 0){
                strcpy(lista[j].palavra, "");
                lista[j].aparicoes = 0;
                lista[i].aparicoes++;
            }
        }
    }

    //só para testar
//    for(i = 0; i < 400; i++)
//    {
//        printf("%d ", lista[i].aparicoes);
//    }
//    for(i = 0; i < 400; i++)
//    {
//        printf("%s ", lista[i].palavra);
//    }
}

void poe_em_ordem(void){

    int i;
    int max_atual = 400;
    while(max_atual > 0){
        for(i = 1; i < max_atual; i++){
            if(lista[i].aparicoes > lista[i-1].aparicoes){
                int temp = lista[i].aparicoes;
                lista[i].aparicoes = lista[i-1].aparicoes;
                lista[i-1].aparicoes = temp;

                palavra_t temporaria;
                strcpy(temporaria, lista[i].palavra);
                strcpy(lista[i].palavra, lista[i-1].palavra);
                strcpy(lista[i-1].palavra, temporaria);
            }
        }
        max_atual--;
    }

}

void mais_aparecidos(int quantos){
    poe_em_ordem();

    int i;
    for (i = 0; i < quantos; i++){
        printf("%do lugar: %s --- com %d aparicoes\n", i+1, lista[i].palavra, lista[i].aparicoes);
    }

}

int main()
{
    if(abre_arquivo_e_le_texto() == 1){
        printf("houve um erro ao abrir o arquivo\n");
        return 0;
    }

    separa_em_palavras();

    conta_aparicoes();

//    printf("\n");
    mais_aparecidos(QUANTOS);
    return 0;
}
