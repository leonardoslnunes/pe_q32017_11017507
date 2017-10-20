#include <stdio.h>

int fibMem[1000];

int grava(int n, int valor)
{
    if (fibMem[n]!=valor)
    {
        fibMem[n]=valor;
    }
}

int fib (int n)
{
    if (n==0) return 0;
    if (n<=2) return 1;
    
    int resultado = fib(n-1) + fib(n-2);
    grava(n,resultado);
    return resultado;
}

int main()
{
    //zerando valor do array.
    int n;
    for (int i=0; i<20; ++i)
    {
        fibMem[i]=0;
      //printf("matriz %d \n",fibMem[i]);
    }
    
    fibMem[1] = 1;
    fibMem[2] = 1;
    
    scanf("%d",&n);
    printf("%d\n",fib(n));
    
    /*for (int i=0; i<20; ++i)
    {
        printf("matriz %d \n",fibMem[i]);
    }
    */
    return 0;
}

