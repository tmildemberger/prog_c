#include <stdio.h>
//Determine o 2o maior e o 2o menor numero de 20 numeros

int main()
{
    int maior = (1 << 31);
    int menor = ~(1 << 31);
    int segundo_maior = maior + 1;
    int segundo_menor = menor - 1;
    int num;

    int i;
    for(i = 0; i < 20; i++){
        scanf("%d", &num);
        if(num > segundo_maior){
            if(num > maior){
                segundo_maior = maior;
                maior = num;
            }
            else{
                segundo_maior = num;
            }
        }
        else if(num < segundo_menor){
            if(num < menor){
                segundo_menor = menor;
                menor = num;
            }
            else{
                segundo_menor = num;
            }
        }
    }
    printf("Dos numeros que vc escreveu, \n");
    printf("%d -> maior\n", maior);
    printf("%d -> segundo_maior\n", segundo_maior);
    printf("%d -> segundo_menor\n", segundo_menor);
    printf("%d -> menor\n", menor);

    return 0;
}
