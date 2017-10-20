#include <stdio.h>
#include <math.h>

double entrada()
{
    double z = 0;
    scanf("%lf",&z);
    return z;
}

double bhaskara(double a, double b, double c)
{
    double delta = 0;
    double raiz1 = 0;
    double raiz2 = 0;
    delta = b*b - (4*a*c);
    if (delta>=0)
    {
    raiz1 = (-b - sqrt(delta))/(2*a);
    raiz2 = (-b + sqrt(delta))/(2*a);
    printf("%.3lf %.3lf\n",raiz1,raiz2);
    }
    else
    {
    delta = -1*delta;   
    b = -1*b;
    char resposta[50];
    raiz1 = (sqrt(delta))/(2*a);
    snprintf(resposta, sizeof resposta,"%.3lf + %lfi\n",b, raiz1);
    printf("%s\n",resposta);
    snprintf(resposta, sizeof resposta,"%.3lf - %lfi",b, raiz1);
    printf("%s\n",resposta);
    }
    
    
}

int main()
{
    double a = 0;
    a = entrada();
    double b = 0;
    b = entrada();
    double c = 0;
    c = entrada();
    bhaskara(a,b,c);
    return 0;
}
