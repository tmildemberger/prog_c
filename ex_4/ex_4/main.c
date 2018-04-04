#include <stdio.h>
// Transformar numeros binários para BCD

int main()
{
    int bin;
    int digits = 0;
    int bin_invertido = 0;
    int dec = 0;
    int dec_invertido = 0;
    int bcd = 0;
    int bcd_invertido = 0;
    scanf("%d", &bin);

    printf("^ em binario equivale a:\n");
//    printf("bin = %d\n", bin);

    while(bin > 0){
        bin_invertido *= 10;
        bin_invertido += bin % 10;
        bin /= 10;
        digits++;
    }
//    printf("bin_invertido = %d\n", bin_invertido);

    for(int i = 0; i < digits; i++){
        dec *= 2;
        dec += bin_invertido % 10;
        bin_invertido /= 10;
    }
//    printf("dec = %d\n", dec);
    digits = 0;
    while(dec > 0){
        dec_invertido *= 10;
        dec_invertido += dec % 10;
        dec /= 10;
        digits++;
    }
//    printf("%d\n", dec_invertido);

    for(int i = 0; i < digits; i++){
        bcd_invertido = dec_invertido % 10;
        for(int digitos_bcd = 0; digitos_bcd < 4; digitos_bcd++){
            bcd *= 10;
            bcd += bcd_invertido % 2;
            bcd_invertido /= 2;
        }
        for(int digitos_bcd = 0; digitos_bcd < 4; digitos_bcd++){
            printf("%d", bcd % 10);
            bcd /= 10;
        }
        printf(" ");
        dec_invertido /= 2;
    }
    printf("em BCD\n");
    return 0;
}
