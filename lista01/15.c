#include <stdio.h>

//pares no intervalo até 100

int par100(numero){
  int c =0; //contador de loops.
  int dividendo=0;
  int resto;
  
  if(numero>100){
    int dif=numero-100;
    printf("Divisíveis por 2 a partir de 100:\n");
    while(c<=dif){
      dividendo=100+c;
      resto=dividendo%2;
      if(resto==0){
        printf("%d \n ",dividendo);  
      }
      ++c;
    }
  }  
  else if(numero<100){
    int dif=100-numero;
    printf("Divisíveis por 2 até 100:\n");
    while(c<=dif){
      dividendo=numero+c;
      resto=dividendo%2;
      if(resto==0){
        printf("%d \n ",dividendo);  
      }
      ++c;
    }
  }
  else
  printf("Número digitado é igual a 100.");
  
}

int main() {
  int numero;
  printf("Entre com um número:\n");
  scanf("%d:",&numero);
  par100(numero);
}