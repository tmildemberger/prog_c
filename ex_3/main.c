#include <stdio.h>
// Transformar numeros da base 7 para a base 10

int main()
{
    int hept;
    int hept_invertido = 0;
    int dec = 0;
    int digits = 0;
    printf("Bem vindo ao conversor de numeros da base 7 para base 10\n");
    printf("Obrigado por escolher o nosso produto\n");
    printf("Digite um numero na base 7: \n\n");

    scanf("%d", &hept);

    while(hept > 0){
        hept_invertido *= 10;
        hept_invertido += hept % 10;
        hept /= 10;
        digits++;
    }

    for(int i = 0; i < digits; i++){
        dec *= 7;
        dec += hept_invertido % 10;
        hept_invertido /= 10;
    }

    printf("^ na base 7 equivale a %d na base 10\n", dec);

    return 0;
}
