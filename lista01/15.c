#include <stdio.h>

//pares no intervalo at� 100

int par100(numero){
  int c =0; //contador de loops.
  int dividendo=0;
  int resto;
  
  if(numero>100){
    int dif=numero-100;
    printf("Divis�veis por 2 a partir de 100:\n");
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
    printf("Divis�veis por 2 at� 100:\n");
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
  printf("N�mero digitado � igual a 100.");
  
}

int main() {
  int numero;
  printf("Entre com um n�mero:\n");
  scanf("%d:",&numero);
  par100(numero);
}