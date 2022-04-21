#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
int random();
 
 
int main()
{

    int fil = 5, col = 5, totalsuma = 0;
    srand(time(NULL));
 
    int matriz[fil][col];
 
    for (int i = 0; i < fil; i++)
        for (int j = 0; j < col; j++)
        {
            matriz[i][j] = random();
            totalsuma += matriz[i][j];
        }
 
 
    printf("\n Matriz:\n");
 
    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf(" %2d  ", matriz[i][j]);
        }
        printf("\n");
    }
 
    printf("\n totalsuma: %d\n", totalsuma);
 
    return 0;
}
 
int random()
{
    return rand() % 10 + 1;
}
