#include <stdio.h>

//programa desafio

int soma2gauss(int menor,int maior){
  int resp=0;
  while(menor<=maior){
    resp=resp+(menor*menor);
    ++menor;
  }
  return resp;
}

int quadradosoma(int menor,int maior){
  int resp1=0;
  while(menor<=maior){
    resp1=resp1+menor;
    ++menor;
  }
  resp1=resp1*resp1;
  return resp1;
}


int main(){
  int x,y,menor,maior,resultado;
  printf("Entre o primeiro número:\n");
  scanf("%d",&x);
  printf("Entre o segundo número:\n");
  scanf("%d" ,&y);
  if(x>y){
    menor=y;
    maior=x;
  }
  else{
    menor=x;
    maior=y;
  }
  resultado=quadradosoma(menor,maior)-soma2gauss(menor,maior);
  printf("Resultado: %d\n",resultado);
}
