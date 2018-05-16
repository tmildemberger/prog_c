#include <stdio.h>
#include <stdlib.h>

float paralelo(float res1, float res2){
    return (res1*res2)/(res1+res2);
}

float serie(float res1, float res2){
    return res1+res2;
}

int main()
{
    int linhas = 0;
    float serie_e12[13] = {1000, 1200, 1500, 1800, 2200, 2700, 3300, 3900, 4700, 5600, 6800, 8200, 10000};
    int idx1, idx2;
    for(idx1 = 0; idx1 < 13; idx1++){
        for(idx2 = 0; idx2 < 13; idx2++){linhas++;
            printf("%.2f em paralelo com %.2f => %.2f\n", serie_e12[idx1], serie_e12[idx2], paralelo(serie_e12[idx1], serie_e12[idx2]));
        }
    }
    printf("%d\n", linhas);
    return 0;
}
