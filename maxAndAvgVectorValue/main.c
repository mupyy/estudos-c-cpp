
#include <stdio.h>

int main (void)
{
	int vectorA[6];
	int maxValue = 0;
	float sum = 0;
	float avgValue = 0;



	for (int i = 0; i < 6; i++)
	{
		printf("\nDigite um valor para a posição %d do vetor A: ", i);
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
	printf("\nSeu valor máximo é: %d\n", maxValue);
	printf("\nE a média dos valores é: %.2f", avgValue);
}

