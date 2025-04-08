/*
    Author: Victor Mielitz
    Date: 19/11/2022
    Purpose: This program reads a vector inputed by the user,
    then, the user choose 3 variables for the program to find
    then and return the quantity of times that it found the
    variables. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[10], value1, value2, value3;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Insira um valor para a posição %d do vetor.", i);
        scanf("%d", &vector[i]);
    }

    printf("Insira três variáveis para serem procuradas no vetor informado: \n");
    scanf("%d", &value1);
    scanf("%d", &value2);
    scanf("%d", &value3);

    for (int i = 0; i < 10; i++)
    {
        if (value1 == vector[i])
            count1++;
        else if  (value2 == vector[i])
            count2++;
        else if  (value3 == vector[i])
            count3++;
    }

    printf("Foram encontrados o valor %d %d vezes", value1, count1);
    printf("Foram encontrados o valor %d %d vezes", value2, count2);
    printf("Foram encontrados o valor %d %d vezes", value3, count3);

    printf("Além disso, o vetor foi organizado de forma crescente: ");
    printf("%d %d %d %d %d %d ", vector[0], vector[1], vector[2], vector[3], vector[4], vector[5]);
    printf("%d %d %d %d", vector[6], vector[6], vector[7], vector[8], vector[9]);

    for (int 1 = 0; i < 9; i++)
    {
        for (int j = i + i; j < 10; j++)
            if (vector[i] > vector[j])
            {
                int memory = vector[j];
                vector[j] = vector[i];
                vector[i] = memory;
            }

    }

}

/* Teacher code
#include <stdio.h>
int main()
{
    int A, B, C, V[10], P, ca=0, cb=0, cc=0;
    for(P=0;P<=9;P++)
    {
        printf("Digite valor para posição %d: ", P);
        scanf("%d", &V[P]);
    }
    printf("Digite valor para as variáveis A, B e C que deseja procurar: \n");
    scanf("%d%d%d", &A, &B, &C);
    for(P=0;P<=9;P++)
    {
        if(V[P]==A)
            ca++;
        if(V[P]==B)
            cb++;
        if(V[P]==C)
            cc++;
    }
    printf("\nValor %d foi digitado %d vezes", A, ca);
    printf("\nValor %d foi digitado %d vezes", B, cb);
    printf("\nValor %d foi digitado %d vezes", C, cc);
}



*/
