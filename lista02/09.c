#include <stdio.h>

int entrada()
{
    int z = 0;
    scanf("%d",&z);
    return z;
}

int potencia(int x, int y)
{
    int resultado = 0;
    if (y>=1)
    {
        --y;
        resultado = x*potencia(x,y);
    }
    else
        resultado = 1;
    return resultado;
}

int main()
{
    int x = entrada();
    int y = entrada();
    printf("%d\n",potencia(x,y));
}

