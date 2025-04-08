/*

Autor: Victor Mielitz
Instituição: FATEC Osasco
Turma: Automação Industrial - Noite
Data: 15/11/2022
Proposta:
	Código para simular um jogo de adivinhação onde um jogador inputa no programa um valor inteiro e o segundo jogador procura adivinhar este valor.
	A cada tentativa do segundo jogador, o programa apresenta dicas na interface a fim de indicar se o mesmo acertou o valor ou está próximo do mesmo(acima ou abaixo).

*/
#include <stdio.h>

int main(void)
{
//Declaração de variáveis
int valueToGuess = 0;
int guessedValue = 0;

//Interação com o Usuário
printf("Insira um valor inteiro a ser adivinhado: ");
scanf("%d", &valueToGuess);

do
{
    printf("Inserir tentativa para adivinhação do valor inteiro 'desconhecido': ");
    scanf("%d", &guessedValue);

    if (guessedValue < valueToGuess)
		printf("O número correto é maior. Tente novamente.\n");

	if (guessedValue > valueToGuess)
		printf("O número correto é menor. Tente novamente.\n");
}

while (guessedValue != valueToGuess);

printf("Parabéns! Você acertou.");

return 0;
}
