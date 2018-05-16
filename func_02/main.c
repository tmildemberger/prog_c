#include <stdio.h>

int fatorial(int num){
    int acc = 1;
    while(num > 1){
        acc *= num;
        num--;
    }
    return acc;
}

int main()
{
    int i;
    printf("\nTabela de fatoriais:\n\n");
    for(i = 1; i < 20; i++){
        printf("%d! = %d\n", i, fatorial(i));
    }
    printf("\nObrigado\n");
    return 0;
}
