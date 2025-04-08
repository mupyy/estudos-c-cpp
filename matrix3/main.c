/* Author: Victor Mielitz
    Date: 27/11/2022
    Desc: */

#include <stdio.h>

int main (void)
{
    int arr[4][4];
    int i, j;

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("Valor linha %d coluna %d: ", i, j);
            scanf("%d", &arr[i][j]);

            if (i == j)
                arr[i][j] = arr[i][j] * arr[i][j];
        }
    }

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
            printf(" %d ", arr[i][j]);
    
    printf("\n");
    }
}