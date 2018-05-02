#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[32];
    fgets(nome, 32, stdin);
    int i;
    for(i = 0; i < 31; i++){
        if(nome[i] == '\n'){
            nome[i] = '\0';
            break;
        }
    }
    i--;
    for(; i >= 0; i--){
        printf("%c", nome[i]);
    }
    printf("\n");

    return 0;
}
