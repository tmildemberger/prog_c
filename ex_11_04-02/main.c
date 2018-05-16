#include <stdio.h>
#include <stdlib.h>
//ler 20 numeros e imprimir em ordem crescente

#define NUMS 50000

#define LER_DO_ARQUIVO 1

#define BUBBLE_SORT 1
#define GNOME_SORT 0

int main()
{
#ifdef LER_DO_ARQUIVO
    freopen("../nums.txt", "r", stdin);
#endif // LER_DO_ARQUIVO

    int* numeros = calloc(NUMS, sizeof(int));
//    int numeros[NUMS];
    int i = 0;
    for(i = 0; i < NUMS; i++)
        scanf("%d", &numeros[i]);

#if BUBBLE_SORT==1
    int max_atual = i;
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
#endif
#if INSERTION_SORT==1
    int max_atual = 0;
    max_atual = i;
    int j = 0;
    for(i = 1; i < max_atual; i++){
        for(j = i-1; j >= 0; j--){
            if(numeros[j] > numeros[j+1]){
                int temp = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = temp;
            }
            else
                break;
        }
    }
#endif

//    for(i = 0; i < NUMS; i++){
//        printf("%d\n", numeros[i]);
//    }
    printf("Finished! (trust me)\n");
    free(numeros);
    return 0;
}
