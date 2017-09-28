#include <stdio.h>

//soma e média de 10 numeros

int SomaMedia(int a,int b,int c,int d,int e,int f,int g,int h,int i,int j){
  int soma=(a+b+c+d+e+f+g+h+i+j);
  double dbsoma = (double)soma;
  double media=dbsoma/10;
  printf("\n ---Soma---:\n %d",soma);
  printf("\n ---Média---:\n %.1lf",media);
}

int main() {
  int numero1,numero2,numero3,numero4,numero5,numero6,numero7,numero8,numero9,numero10;
  printf("Entre com 10 números para realizar a soma e média:\n");
  scanf("%d:",&numero1);
  scanf("%d:",&numero2);
  scanf("%d:",&numero3);
  scanf("%d:",&numero4);
  scanf("%d:",&numero5);
  scanf("%d:",&numero6);
  scanf("%d:",&numero7);
  scanf("%d:",&numero8);
  scanf("%d:",&numero9);
  scanf("%d:",&numero10);
  
  SomaMedia(numero1,numero2,numero3,numero4,numero5,numero6,numero7,numero8,numero9,numero10);
}