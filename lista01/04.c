#include <stdio.h>

//multiplica dois números

int multi(int x,int y){
    
    printf("Digite dois números inteiros para serem multiplicados:\n ");
    printf("Digite o primeiro número: ");
    scanf("%d", &x);
    printf("\n Digite o segundo número: ");
    scanf("%d", &y);
    printf("\n Os números digitados foram: %d e %d. \n",x,y);
    int resultado;
    resultado = x*y;
    printf(" \n Resultado: %d",resultado);
    
}


int main()
{
    int x,y;
    multi(x,y);

    return 0;
}