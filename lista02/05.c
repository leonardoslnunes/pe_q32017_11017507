#include <stdio.h>
#include <math.h>

int entrada()
{
    int z = 0;
    scanf("%d",&z);
    return z;
}

int fatorial(int h)
{
    int fat = 0;
    if (h>1)
    fat = h*(fatorial(h-1));
    else
    fat = 1;
    return fat;
}

int binominal(int x, int y)
{
    int bi = 0;
    bi = fatorial(x)/(fatorial(y)*fatorial(x-y));
    printf("%d\n",bi);
    return bi;
}

int main()
{
    int x = entrada();
    int y = entrada();
    binominal(x,y);
    return 0;
}
