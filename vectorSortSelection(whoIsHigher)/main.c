/*
    Author: Victor Mielitz
    Date: 19.11.2022
    Purpose:
        This program receives a vector input from the user
        then it rearranges it, based on who is higher - the
        actual value or the next value, and so on. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[6];

    //Preenchimento do vetor.
    for (int i = 0; i < 6; i++)
    {
        printf("Insira um valor para a posição %d do vetor: ", i);
        scanf("%d", &vector[i]);
    }

    printf("Vetor antes de ser organizado: ");
    printf("%d %d %d ", vector[0], vector[1], vector[2]);
    printf("%d %d %d ", vector[3], vector[4], vector[5]);

    //Organização do vetor, de ordem crescente
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (vector[i] > vector[j])
            {
                //Caso a posição atual seja maior que
                //a próxima posição do vetor,
                //os dois valores são trocados.
                int memory = vector[j];
                vector[j] = vector[i];
                vector[i] = memory;
            }
        }
    }

    printf("Vetor após organização: ");
    printf("%d %d %d ", vector[0], vector[1], vector[2]);
    printf("%d %d %d ", vector[3], vector[4], vector[5]);

}
