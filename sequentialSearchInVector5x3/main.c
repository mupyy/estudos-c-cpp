/*
    Author: Victor Mielitz
    Date: 19.11.2022
    Purpose:
        This program searchs for a desirable value in a
        5x3 matriz(matrix?) and informs the user. */

#include <stdio.h>

int main()
{
    int vector[5][3];
    int find = 0;
    _Bool flag = 0;

    //Preenchimento do vetor 5x3
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            printf("Insira um valor para a linha %d e coluna %d do vetor: ", i, k);
            scanf("%d", &vector[i][k]);
        }
    }

    printf("Insira um valor a ser procurado no vetor: ");
    scanf("%d", &find);

    //Busca do valor desejado.
    for (int i = 0; i < 5; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            if (find == vector[i][k])
            {
                printf("O valor procurado est� na linha %d e coluna %d do vetor.", i, k);
                flag = 1;
            }
        }
    }

    if (flag == 0)
        printf("O valor a ser procurado n�o se aplica para o vetor mencionado");
}
