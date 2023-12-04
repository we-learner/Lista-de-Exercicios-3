#include <stdio.h>

int main()
{
    int valor, vetor[10];

    for(int posicao = 0;posicao < 10;posicao++)
    {
        scanf("%d", &valor);
        if(valor > 0)
        {
            vetor[posicao] = valor;
        }
        else
        {
            vetor[posicao] = 1;
        }
    }

    for(int posicao = 0;posicao < 10;posicao++)
    {
        printf("X[%d] = %d\n", posicao, vetor[posicao]);
    }

    return 0;
}