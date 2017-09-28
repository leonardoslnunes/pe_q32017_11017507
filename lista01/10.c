#include <stdio.h>

//Celsius to Kelvin

int convert(double T,int option){
    
    double resultado;
    
    if (option==1){
      resultado=T+273.15;
       printf(" \n Resultado: %.2lf Kelvin",resultado);
    }
    else{
      resultado=T-273.15;
       printf(" \n Resultado: %.2lf °C",resultado);
    }

}


int main()
{
    double T; int option;
    printf("Digite a temperatura:\n ");
    scanf("%lf", &T);
    printf("Digite: \n '1' - Para converter Celsius para Kelvin; \n '2' - Para converter Kelvin para Celsius:\n ");
    scanf("%d", &option);
    convert(T,option);

    return 0;
}