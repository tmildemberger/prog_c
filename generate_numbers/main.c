#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMS 20000

#define TOP_LIMIT 1000

int main()
{
    srand(time(NULL));
    FILE* f = fopen("../nums.txt", "w");
    int i = 0;
    for(i = 0; i < NUMS; i++){
        fprintf(f, "%d\n", rand()%TOP_LIMIT);
    }
    fclose(f);
    return 0;
}
