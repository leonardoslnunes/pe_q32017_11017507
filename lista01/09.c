#include <stdio.h>

//Celsius to Fahrenhiet

int convert(double T,int option){
    
    double resultado;
    
    if (option==1){
      printf("valor de T é %lf",T);
      resultado=(1.8*T)+(32);
       printf(" \n Resultado: %.2lf °F",resultado);
    }
    else{
      resultado=((T-32)*(0.5555555));
       printf("valor de T é %lf",T);
       printf(" \n Resultado: %.2lf °C",resultado);
    }

}


int main()
{
    double T; int option;
    printf("Digite a temperatura:\n ");
    scanf("%lf", &T);
    printf("Digite: \n '1' - Para converter Celsius para Fahrenheit; \n '2' - Para converter Fahrenheit para Celsius:\n ");
    scanf("%d", &option);
    convert(T,option);

    return 0;
}