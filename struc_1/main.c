#include <stdio.h>
#include <stdlib.h>
//função que recebe dois numeros complexos
//na forma retangular e retorna a soma

typedef struct {
    int real;
    int imaginario;
} complexo_t;

complexo_t soma(complexo_t num1, complexo_t num2){
    complexo_t resultado;
    resultado.real = num1.real + num2.real;
    resultado.imaginario = num1.imaginario + num2.imaginario;
    return resultado;
}

int main()
{
    complexo_t entrada1, entrada2, resul;
    scanf("%d %d %d %d", &entrada1.real, &entrada1.imaginario, &entrada2.real, &entrada2.imaginario);
    resul = soma(entrada1, entrada2);
    printf("(%d + %di) + (%d + %di) = %d + %di", entrada1.real, entrada1.imaginario,
                                                 entrada2.real, entrada2.imaginario, resul.real, resul.imaginario);
    return 0;
}
