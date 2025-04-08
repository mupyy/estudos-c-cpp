/* 
Author: Victor Mielitz
Date: 27/11/2022
Desc: This programs organizes a vector(array with one dimension) inserted by the user
the searchs for a specified user value with the binary search*/

#include <stdio.h>

int main()
{
    int arr[9], search, middle;
    int low = 0;
    int high = 9;

    int find = 0;

    for (int i = 0; i < 9; i++) 
    {
        printf("Insira um valor para a posição %d do Vetor: ", i);
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (arr[i] > arr[j])
            {
                int mem = arr[j];
                arr[j] = arr[i];
                arr[i] = mem;
            }
        }
    }
    printf("Vetor organizado:");

    for (int i = 0; i < 9; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\nInsira um valor inteiro para ser buscado no Vetor:");
    scanf("%d", &search);

    while(find == 0 && low <= high)
    {
        middle = (low + high) / 2;

        if (search == arr[middle])
            find = 1; 

        else
            if (search < arr[middle])
                {
                    high = middle - 1;
                }
            else
                {
                    low = middle + 1;
                }
    }   

    if (find == 1)
        printf("Localizado na posição %d", middle);

    else 
        printf("Valor não localizado");

    /*for (int i = 0; i < 9; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
    */
}
