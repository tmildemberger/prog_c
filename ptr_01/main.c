#include <stdio.h>
#include <stdlib.h>
//função que recebe dois numeros complexos
//na forma retangular e retorna a soma

void soma(int real1, int img1, int real2, int img2, int *soma_real, int *soma_img){
    (*soma_real) = real1 + real2;
    (*soma_img) = img1 + img2;
}

int main()
{
    int r1, i1, r2, i2, r3, i3;
    scanf("%d %d %d %d", &r1, &i1, &r2, &i2);
    soma(r1, i1, r2, i2, &r3, &i3);
    printf("(%d + %di) + (%d + %di) = %d + %di", r1, i1,
                                                 r2, i2, r3, i3);
    return 0;
}
