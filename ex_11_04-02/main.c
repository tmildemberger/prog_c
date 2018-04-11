#include <stdio.h>
//ler 20 numeros e imprimir em ordem crescente

#define NUMS 200
#define LER_DO_ARQUIVO 1

int main()
{
#ifdef LER_DO_ARQUIVO
    freopen("../nums.txt", "r", stdin);
#endif // LER_DO_ARQUIVO

    int numeros[NUMS];
    int max_atual = 0;
    int i = 0;
    for(i = 0; i < NUMS; i++)
        scanf("%d", &numeros[i]);
    max_atual = i;
    while(max_atual > 0){
        for(i = 1; i < max_atual; i++){
            if(numeros[i] < numeros[i-1]){
                int temp = numeros[i];
                numeros[i] = numeros[i-1];
                numeros[i-1] = temp;
            }
        }
        max_atual--;
    }
    for(i = 0; i < NUMS; i++){
        printf("%d\n", numeros[i]);
    }
    return 0;
}
