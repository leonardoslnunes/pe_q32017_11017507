#include <stdio.h>
int vetor[1000];

int entrada()
{
    int z = 0;
    scanf("%d",&z);
    return z;
}

int conta_casas(int n)
{
     if (n>0)
    {
        return 1+conta_casas(n/10);
    }
    else
        return 0;
}

int palindromo(int n, int c, int len)
{
    if (c<len)
    {
        if (vetor[c]==vetor[len-1])
        {
           //colocar um if q da break
          //  printf("\n%d = %d",vetor[c],vetor[len-1]);    
            palindromo(n, c+1, len-1);
           // printf("sim");    
        }
        else
            printf("nao");
    }
    else
    printf("sim");
}

int main()
{
    int n = entrada();
    int num = n;
    int len = conta_casas(n);
    for (int i = len-1; i >= 0 ;--i)
    {
        vetor[i] = num%10;
       // printf("v%d = %d\n",i,vetor[i]);
        num = num/10;
    }
   // printf("%d\n",vetor[len]);
    int c = 0;
    palindromo(n, c, len);
    printf("\n");
}
