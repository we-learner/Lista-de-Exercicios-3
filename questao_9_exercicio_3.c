#include <stdio.h>

int main()
{
    int colunaInicial = 1;
    char operacao;
    double matriz[12][12], soma = 0;
    scanf("%c", &operacao);

    for(int linha = 0;linha < 12;linha++)
    {
        for(int coluna = 0;coluna < 12;coluna++)
        {
            scanf("%lf", &matriz[linha][coluna]);
        }
    }

    for(int linha = 0;linha < 12;linha++)
    {
        for(int coluna = colunaInicial;coluna < 12;coluna++)
        {
            soma = soma + matriz[linha][coluna];
        }
        colunaInicial++;
    }   

    if(operacao == 'S')
    {
        printf("%.1lf\n", soma);
    } else if(operacao == 'M')
    {
        printf("%.1lf\n", soma/66);
    }

    return 0;
}