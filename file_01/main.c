#include <stdio.h>
#include <stdlib.h>
//n de letras A
//n de palavras

int main()
{
    FILE *arq;
    arq = fopen("teste.txt", "rt");
    int numero_de_A_s = 0;
    int ultimo_naofoi_um_espaco = 0;
    int numero_de_palavras = 0;

    if(arq){
        char texto[65536];
        int qtde;
        qtde = fread(texto, 1, 65535, arq);
        texto[qtde] = '\0';
        printf("%s\n", texto);
        int i;
        for(i = 0; i < qtde; i++){
            if(texto[i] == 'A')
                numero_de_A_s++;
            if((texto[i] == ' ' || texto[i] == '\n') && ultimo_naofoi_um_espaco){
                numero_de_palavras++;
                ultimo_naofoi_um_espaco = 0;
            }
            if(texto[i] != ' ' && texto[i] != '\n'){
                ultimo_naofoi_um_espaco = 1;
            }
        }
        if(ultimo_naofoi_um_espaco)
            numero_de_palavras++;
    }
    printf("numeros de letras A: %d\n", numero_de_A_s);
    printf("numeros de palavras: %d\n", numero_de_palavras);
    fclose(arq);
    return 0;
}
