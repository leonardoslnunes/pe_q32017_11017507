#include <stdio.h>

//soma dois números

int soma2(int x,int y){
    
    printf("Digite dois números inteiros para serem somados:\n ");
    printf("Digite o primeiro número: ");
    scanf("%d", &x);
    printf("\n Digite o segundo número: ");
    scanf("%d", &y);
    printf("\n Os números digitados foram: %d e %d. \n",x,y);
    int resultado;
    resultado = x+y;
    printf(" \n Resultado: %d",resultado);
    
}


int main()
{
    int x,y;
    soma2(x,y);

    return 0;
}