
#include <stdio.h>

int main (void)
{
	int vectorA[6];
	int maxValue = 0;
	float sum = 0;
	float avgValue = 0;



	for (int i = 0; i < 6; i++)
	{
		printf("\nDigite um valor para a posi��o %d do vetor A: ", i);
		scanf("%d", &vectorA[i]);
	}

	maxValue = vectorA[0];

	for (int i = 0; i < 6; i++)
	{
		if (maxValue < vectorA[i])
		{
			maxValue = vectorA[i];
		}

		sum += vectorA[i];

	}

	avgValue = sum / 6;

	printf("\nDado o vetor: %d %d %d %d %d %d\n", vectorA[0], vectorA[1], vectorA[2], vectorA[3], vectorA[4], vectorA[5]);
	printf("\nSeu valor m�ximo �: %d\n", maxValue);
	printf("\nE a m�dia dos valores �: %.2f", avgValue);
}

