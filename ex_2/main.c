#include <stdio.h>
// Transformar numeros da base 10 para a base 7

int main()
{
    int dec;
    int hept_invertido = 0;
    int hept = 0;
    int digits = 0;
    printf("Bem vindo ao conversor de numeros da base 10 para base 7\n");
    printf("Obrigado por escolher o nosso produto\n");
    printf("Digite um numero na base 10: \n\n");

    scanf("%d", &dec);

    while(dec > 0){
        hept_invertido *= 10;
        hept_invertido += dec % 7;
        dec /= 7;
        digits++;
    }

    for(int i = 0; i < digits; i++){
        hept *= 10;
        hept += hept_invertido % 10;
        hept_invertido /= 10;
    }

    printf("^ na base 10 equivale a %d na base 7\n", hept);

    return 0;
}
