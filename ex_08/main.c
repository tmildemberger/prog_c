#include <stdio.h>
//Calcular o fatorial de n
//Qual o maior n possivel?

// 13, 17 18
int main()
{
    int num;
    int fatorial = 1;
    scanf("%d", &num);

    while(num > 1){
        fatorial *= num;
        num--;
    }

    printf("%d\n", fatorial);
    return 0;
}
