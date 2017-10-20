#include <stdio.h>

int resultado = 0;
int resto=0;
int potencia=0;
int vetor[500];

int entrada()
{
    int z = 0;
    scanf("%d",&z);
    return z;
}

int binario_decimal(int n)
{ 
    resto=n%10;
    
    if (potencia==0)
    {
       potencia=1;
    }
    else
    {
       potencia*=2;
    }  
    
    if (n>0)
    {
        return (resto*potencia)+binario_decimal(n/10);
    }
    else
        return 0;
}

int conta_casas(int n)
{
     if (n/2>0)
    {
        return 1+conta_casas(n/2);
    }
    else
        return 1;
}

int decimal_binario(int n, int len)
{
    int m = 0; //garante que vai ter mais um loop.
    
    if (n>0)
    {
        vetor[len]=n%2;
    }
    else if(n==0 && m==0)
    {
        m=1;
        return m;
    }
    
    if (m==0)
    {
        decimal_binario(n/2,len-1);
    }
    else
        return 0;
}

int programa_numero(int a, int b)
{
    if(a==1) //entrada em decimal
    {
        int tamanho = 0;
        tamanho = conta_casas(b);
        decimal_binario(b,tamanho);
        //print do resultado
        for(int i=1; i<=tamanho; ++i)
        {
            printf("%d",vetor[i]);    
        }
        printf("\n");
    }
    else     //entrada em binario
        printf("%d\n",binario_decimal(b));
}

int main()
{
    int a,b = 0;
    a = entrada();
    b = entrada();
    programa_numero(a,b);
    
    return 0;
}
