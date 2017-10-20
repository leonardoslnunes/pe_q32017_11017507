#include <stdio.h>
#include <math.h>

int op()
{
    int n = 0;
    scanf("%d",&n);
    return n;
}

float entrada()
{
    float x = 0;
    scanf("%f",&x);
    return x;
}

void calculadora(int op, float x, float y)
{
    float resultado = 0;
    
    switch(op)
    {
    case 1:
    resultado = x+y;
    break;
    
    case 2:
    resultado = x-y;
    break;

    case 3:
    resultado = x*y;
    break;
    
    case 4:
    resultado = x/y;
    break;
    
    case 5:
    resultado = pow((int)x,(int)y);
    break;
    }
    
    printf("%f\n",resultado);
    }

int main()
{
    int option = op();
    float x = entrada();
    float y = entrada();
    calculadora(option,x,y);
}

