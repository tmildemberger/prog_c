#include <stdio.h>

int le_limitado(int limite_inferior, int limite_superior){
    int num;
    do{
        printf("escreva dois numeros entre %d e %d\n", limite_inferior, limite_superior);
        scanf("%d", &num);
    } while(num <= limite_inferior || num >= limite_superior);
    return num;
}

int main()
{
    int num1, num2;
    int lim_sup = 2000;
    int lim_inf = 1000;
//    printf("escreva dois numeros entre %d e %d\n", lim_inf, lim_sup);
    num1 = le_limitado(lim_inf, lim_sup);
    num2 = le_limitado(lim_inf, lim_sup);

    printf("a soma de %d e %d eh %d\n", num1, num2, num1+num2);
    return 0;
}
