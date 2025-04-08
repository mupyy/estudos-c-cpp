/* Author: Victor Mielitz
    Date: 27/11/2022
    Desc: */

#include <stdio.h>

int main (void)
{
    int arr[10];
    int i = 0;

    while (i < 10)
    {
        printf("Insira um valor para a posição %d da array: ", i);
        scanf("%d", &arr[i]);
        i++;
    }

    i = 0;
    while (i < 10)
    {
        if ((arr[i] % 2 != 0) && (i % 2 ==0))
            printf("%d na posição %d ", arr[i], i);
        i++;
    }

}