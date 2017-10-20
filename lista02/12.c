#include <stdio.h>

int entrada()
{
    int z = 0;
    scanf("%d",&z);
    return z;
}

int binomio(int linha, int coluna)
{
    int radar[1000][1000];
    int coef = 1, space, i, j;

    for(i=0; i<=linha; i++)
    {
        for(j=0; j <= i; j++)
        {
            if (j==0 || i==0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;
            radar[i][j] = coef;
        //    printf("%4d", coef);
        }
    //    printf("\n");
    }
    printf("%d\n",radar[linha][coluna]);
    return 0;
}

int main()
{
    int linha = entrada();
    int coluna = entrada();
    binomio(linha,coluna);
}

