#include <stdio.h>

//decimal to binário

int convert(int numero,int Opcao){
  
  int n= numero;
  int resto;
  int ndigitos=0;
  int potencia=0;
  const int base=2;
  int resultado=0;
  
  if (Opcao==2){
    
    while(n>0)  {
      resto=n%10;
      if (potencia==0){
        potencia=1;
      }
      else {
        potencia=potencia*2;
      }  
      resultado=resultado+(resto*potencia);
      n=n/10;
      ndigitos=ndigitos+1;
    }
    
    n=numero;
    printf("\n \n");
    printf("\n \n");
    printf("---Decimal---: \n %d",resultado);

  }
  else{
    
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
    
    printf("\n \n");
    printf("\n \n");
    printf("---Binário---: \n");
    for (int i=0;i<=ndigitos;++i){
     printf("%d",resposta[i]);
    }
  }
  
}

int main() {
  int numero;
  int Opcao;
  printf("Numero:");
  scanf("%d:",&numero);
  printf("Opcao: \n '1' - converte decimal para binário. \n '2' - converte binário para decimal. \n ");
  scanf("%d:",&Opcao);
  convert(numero,Opcao);
}