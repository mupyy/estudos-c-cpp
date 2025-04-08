/******************************************************************

by: Victor Mielitz
date: 12/11/2022
desc: this program reads 2 arrays(vectors). One vector with 3 elements and the other vector
with 6 elements sum then to a a third vector, the third matrix is printed in screen

********************************************************************/


#include <stdio.h>

int vectorA[3], vectorB[6], vectorC[9], i;

int main()
{
    for (i = 0; i <= 2; i++)
    {
        printf("Value to be insert in the line %d of the vectorA: ", i);
        scanf("%d", &vectorA[i]);
        vectorC[i] = vectorA[i];
    }
    for(i = 0; i <= 5; i++)
    {
        printf("Value to be insert in the line %d of the vectorB: ", i);
        scanf("%d", &vectorB[i]);
        vectorC[3 + i] = vectorB[i];
    }
    for (i = 0; i <= 8; i++)
    {
        printf("vectorC value in the %d line of the array: %d\n", i, vectorC[i]);
    }
}

/**********************************************************************************

Teacher Code:

#include <stdio.h>
int main()
{
    int A[3], B[6], C[9], i; //variáveis de indice sempre do tipo inteiro, celulas qq tipo
    for(i=0;i<=2;i=i+1) // i++ é o mesmo que i=i+1
    {                   // para duas ou mais instruções dentro do laço, use chaves
        printf("Digite valor para o vetor A linha %d: ", i);
        scanf("%d", &A[i]);
        C[i]=A[i];
    }
    for(i=0;i<=5;i++) // i++ é o mesmo que i=i+1
    {                   // para duas ou mais instruções dentro do laço, use chaves
        printf("Digite valor para o vetor B linha %d: ", i);
        scanf("%d", &B[i]);
        C[3+i]=B[i];
    }
    for(i=0;i<=8;i++)
        printf (" %d ", C[i]);//escreve os valores do vetor C
}
*****************************************************************************/
