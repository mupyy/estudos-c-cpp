/*
    Author: Victor Mielitz
    Date: 19/11/2022
    Purpose: This program search a desirable value in the value of the
    vector positions inserted by the user */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int find = 0;
    int vector[10];
    _Bool flag = 0;

    //Preenchimento do Vetor
    for (int i = 0; i < 10; i++)
    {
        printf("Insira um valor para a posi��o %d do Vetor: ", i);
        scanf("%d", &vector[i]);
    }

    printf("Insira o valor inteiro para ser procurado dentro do Vetor estabelecido: ");
    scanf("%d", &find);

    //Pesquisa dentro do vetor e valor desejado informados.
    for (int i = 0; i <10; i++)
    {
        if (find == vector[i])
        {
            flag = 1;
            printf("Valor encontrado na posi��o %d do vetor.", i);
        }
    }

    if (flag == 0)
        printf("Valor desejado n�o se aplica para o vetor formado.");
}
