#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 0 a 681 figurinhas, 5 figurinhas aleatorias por pacote

#define FIGURINHAS 682
#define POR_PACOTE 5
#define VEZES 1000

int main()
{
    srand(time(NULL));

    int figurinhas[FIGURINHAS];
    int soma_dos_pacotes = 0;

    int vezes = 0;
    for(vezes = 0; vezes < VEZES; vezes++){
        int encontradas = 0;
        int pacotes = 0;

        int i = 0, j = 0;
        while(encontradas < FIGURINHAS){
            for(i = 0; i < POR_PACOTE; i++){
                int fig = rand()%FIGURINHAS;
                int repetida = 0;
                for(j = 0; j < encontradas; j++){
                    if(fig == figurinhas[j]){
                        //figurinha repetida
                        repetida = 1;
                        break;
                    }
                }
                if(repetida == 0){
                    figurinhas[encontradas] = fig;
                    encontradas++;
                }
            }
            pacotes++;
        }
        soma_dos_pacotes += pacotes;
    }


    printf("Foram necessarios %lf pacotes em media\n", ((double)soma_dos_pacotes)/vezes);
    printf("%d pacotes no total, ao longo de %d albuns\n", soma_dos_pacotes, vezes);

    return 0;
}
