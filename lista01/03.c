#include <stdio.h>

//subratí dois números

int subtr(int x,int y){
    
    printf("Digite dois números inteiros para serem subtraídos:\n ");
    printf("Digite o primeiro número: ");
    scanf("%d", &x);
    printf("\n Digite o segundo número: ");
    scanf("%d", &y);
    printf("\n Os números digitados foram: %d e %d. \n",x,y);
    int resultado;
    resultado = x-y;
    printf(" \n Resultado: %d",resultado);
    
}


int main()
{
    int x,y;
    subtr(x,y);

    return 0;
}