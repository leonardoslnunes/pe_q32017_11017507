#include <stdio.h>

int entrada()
{
    int z = 0;
    scanf("%d",&z);
    return z;
}

int mdc(int a, int b)
{
    int c;
    if (a > b)
    {
        c = a%b;
        if (c!=0)
            mdc(b,c);
        else
            return b;
    }
    else
    {
        c = b%a;
        if (c!=0)
            mdc(a,c);
        else
            return a;
    }
}

int main()
{
    int c = 0;
    int a = entrada();
    int b = entrada();
    printf("%d\n",mdc(a,b));
}
