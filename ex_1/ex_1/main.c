#include <stdio.h>
// Quantos primos somam 1000 bits 1

int main()
{
    int uns = 0;
    int uns_para_acabar = 1000;
    int primos_encontrados = 0;

    scanf("%d", &uns_para_acabar);

    for(int num = 2; ; num++)
    {
        int primo = 1;
        for(int i = 2; i < num; i++)
        {
            if((num % i) == 0)
            {
                primo = 0;
                break;
            }
        }

        if (primo)
        {
            primos_encontrados++; printf("encontrado o primo %d\n", num);
            int temp = num;
            while(temp > 0)
            {
                uns += temp % 2;
                temp /= 2;
            }
            if(uns > uns_para_acabar)
                break;
        }
    }

    printf("Foram necessarios %d primos para %d bits 1\n", primos_encontrados, uns_para_acabar);

    return 0;
}
