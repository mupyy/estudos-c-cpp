
#include <stdio.h>

int main (void)
{
    int p, s, troca, cteste, ctroca, vet[6];

    cteste = ctroca = 0;

    for(p = 0; p <= 5; p++)
    {
        printf("Digite valor para vetor> ");
        scanf("%d", &vet[p]);
    }

    for(p = 4; p >= 0; p--)
    {
        for(s = 0; s <= p; s++)
        {
            cteste = cteste + 1;
            if (vet[s] > vet[s + 1]){
                ctroca = ctroca +1;
                troca = vet[s];
                vet[s] = vet[s +1];
                vet[s + 1] = troca;
            }
        }
    }
    for(p = 0; p <= 5; p++){
        printf("%d", vet[p]);
    }
    printf("número de testes= %d", cteste);
    printf("número de trocas = %d", ctroca);
}