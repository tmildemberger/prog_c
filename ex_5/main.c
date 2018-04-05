#include <stdio.h>
// Transformar numeros BCD para binário

int main()
{
    int potencia_de_dois;
    int digito = 0;
    int dec = 0;
    int bin = 0;
    int digitos_binarios = 0;

    digito = getchar();
    while(digito != '\n')
    {
        dec *= 10;
        potencia_de_dois = 8;
        do
        {
            dec += potencia_de_dois*(digito - '0');
            potencia_de_dois /= 2;
            digito = getchar();
        } while(potencia_de_dois > 0);
    }
    printf("^ em BCD equivale a:\n");

    while(dec > 0){
        bin *= 10;
        bin += dec % 2;
        dec /= 2;
        digitos_binarios++;
    }

    for(int i = 0; i < digitos_binarios; i++){
        printf("%d", bin%10);
        bin /= 10;
    }
    printf(" em binario\n");
    return 0;
}
