#include <stdio.h>
//#include <math.h>

float entrada()
{
    float z = 0;
    scanf("%f",&z);
    return z;
}

float binario_decimal(float numero) //decimal to binário
{ 
  
  int n = numero;
  int resto;
  int ndigitos=0;
  int potencia=0;
  const int base=2;
  int resultado=0;
  
  while(n>0)
  {
    resto=n%10;
    if (potencia==0)
    {
       potencia=1;
    }
    else
    {
       potencia=potencia*2;
    }  
    
    resultado=resultado+(resto*potencia);
    n=n/10;
    ndigitos=ndigitos+1;
  }
    
    n=numero;
    printf("%d",resultado);
}

float decimal_binario(float numero)
{
  int n = numero;
  int resto;
  int ndigitos=0;
  int potencia=0;
  const int base=2;
  int resultado=0;
  
   while(n>=1){
      resto=n%2;
      n=n/2;
      ndigitos=ndigitos+1;
    }
    
    int resposta[ndigitos]; //array com o tamanho necessário para resposta em binário.
    n=numero; //reset do valor n
    int c = 0; //controle de posição no array resposta e controle de loop.
      
    while(c<=ndigitos){
      resto=n%2;
      resposta[ndigitos-c]=resto;
      n=n/2;
      ++c;
    }
    
    for (int i=0;i<=ndigitos;++i){
    printf("%d",resposta[i]);
    } 
}

float programa_numero(float b, float d)
{
    if(b==1) //entrada em decimal
        decimal_binario(d);
    else     //entrada em binario
        binario_decimal(d);
}

float fahrenhiet_celsius(float d) //Fahrenhiet to Celsius
{
    float resultado = 0;
    resultado = ((d-32)*(0.5555555));
    printf("%.2lf C",resultado);
    return resultado;
}

float celsius_kelvin(float d) //Celsius to Kelvin
{
    float resultado = 0;
    resultado = d+273.15;
    printf("%.2lf K",resultado);
    return resultado;
}

float kelvin_celsius(float d) //Kelvin to Celsius
{
    float resultado = 0;
    resultado = d-273.15;
    printf("%.2lf C",resultado);
    return resultado;
}

float fahrenhiet_kelvin(float d) //Celsius to Fahrenhiet
{
    float resultado = 0;
    resultado = (d+459.67)*(0.555555);
    //T(K) = (T(°F) + 459.67)× 5/9
    printf("%.2lf K",resultado);
    return resultado;
}

float kelvin_fahrenhiet(float d) //Fahrenhiet to Celsius
{
    float resultado = 0;
    resultado = (d*1.8)-459.67;
    //T(°F) = T(K) × 9/5 - 459.67
    printf("%.2lf F",resultado);
    return resultado;
}

float celsius_fahrenheit(float d) //Celsius to Fahrenhiet
{
    float resultado = 0;
    resultado = (1.8*d)+(32);
    printf("%.2lf F",resultado);
    return resultado;
}

float programa_temperatura(float b, float c, float d)
{
    if(b==1 && c==2)
    {
        //printf("celsius_fahrenheit");
        celsius_fahrenheit(d);
    }
    else if(b==1 && c==3)
    {
        //printf("celsius_kelvin");
        celsius_kelvin(d);
    }
    else if(b==2 && c==1)
    {
        //printf("fahrenhiet_celsius");
        fahrenhiet_celsius(d);
    }
    else if(b==2 && c==3)
    {
        //printf("fahrenhiet_kelvin");
        fahrenhiet_kelvin(d);
    }
    else if(b==3 && c==1)
    {
        //printf("kelvin_celsius");
        kelvin_celsius(d);
    }
    else if(b==3 && c==2)
    {
        //printf("kelvin_fahrenhiet");
        kelvin_fahrenhiet(d);
    }
}

float programa(float a,float b,float c,float d)
{
    if (a==1)
    {
        programa_temperatura(b,c,d);
        //executar programa temperatura
    }
    else
        programa_numero(b,d);
        //executar programa numero
        return 2;
}

int main()
{
    float a,b,c,d = 0;
    a = entrada();
    b = entrada();
    c = entrada();
    d = entrada();
    programa(a,b,c,d);
    printf("\n");

    return 0;
}
