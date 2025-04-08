/*

Autor: Victor Mielitz
Institui��o: FATEC Osasco
Turma: Automa��o Industrial - Noite
Data: 15/11/2022
Proposta:
	C�digo para simular um jogo de adivinha��o onde um jogador inputa no programa um valor inteiro e o segundo jogador procura adivinhar este valor.
	A cada tentativa do segundo jogador, o programa apresenta dicas na interface a fim de indicar se o mesmo acertou o valor ou est� pr�ximo do mesmo(acima ou abaixo).

*/
#include <stdio.h>

int main(void)
{
//Declara��o de vari�veis
int valueToGuess = 0;
int guessedValue = 0;

//Intera��o com o Usu�rio
printf("Insira um valor inteiro a ser adivinhado: ");
scanf("%d", &valueToGuess);

do
{
    printf("Inserir tentativa para adivinha��o do valor inteiro 'desconhecido': ");
    scanf("%d", &guessedValue);

    if (guessedValue < valueToGuess)
		printf("O n�mero correto � maior. Tente novamente.\n");

	if (guessedValue > valueToGuess)
		printf("O n�mero correto � menor. Tente novamente.\n");
}

while (guessedValue != valueToGuess);

printf("Parab�ns! Voc� acertou.");

return 0;
}
