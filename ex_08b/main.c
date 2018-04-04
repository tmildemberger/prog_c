#include <stdio.h>
//Calcular o fatorial de n
//Qual o maior n possivel?

// 13, 17 18
int main()
{
    int num;
    int fatorial = 1;
    //scanf("%d", &num);
    int counter = 1;

    int last_fatorial = 0;

    while(fatorial > last_fatorial){
        counter++;
        num = counter;
        fatorial = 1;
        while(num > 1){
            last_fatorial = fatorial;
            fatorial *= num;
            num--;
        }
    }

//    printf("%d\n", fatorial);
    printf("O maior fatorial possivel com um int:\n");
    printf("%d! = %d\n", counter-1, last_fatorial);
    return 0;
}
