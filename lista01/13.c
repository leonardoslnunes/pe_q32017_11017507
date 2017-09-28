#include <stdio.h>

//soma gaussiana

int somaGauss(int numero){
  int n=0;
  int resposta=0;
  while(n<=numero){
    resposta=resposta+n;
    n++;}
  printf(" \n \n ---Soma Gaussiana---: \n %d",resposta);
}

int main() {
  int numero;
  printf("Entre o número para realizar a soma de Gauss:");
  scanf("%d:",&numero);
  somaGauss(numero);
}