#include <stdio.h>
// dado N pelo usuário, setar b1 e b5, resetar b2 e b4 e inverter b3 e b7 sem alterar os demais bits

int main()
{
    int n;
    scanf("%d", &n);
    n |= ((1 << 1) | (1 << 5));
//    printf("%d\n", n);
    n &= ~((1 << 2) | (1 << 4));
//    printf("%d\n", n);    n ^= ((1 << 3) | (1 << 7));
    printf("%d\n", n);
    return 0;
}
