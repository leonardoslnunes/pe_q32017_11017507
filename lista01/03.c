#include <stdio.h>

//subrat� dois n�meros

int subtr(int x,int y){
    
    printf("Digite dois n�meros inteiros para serem subtra�dos:\n ");
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &x);
    printf("\n Digite o segundo n�mero: ");
    scanf("%d", &y);
    printf("\n Os n�meros digitados foram: %d e %d. \n",x,y);
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