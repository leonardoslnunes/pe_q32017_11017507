#include <stdio.h>

//divide dois n�meros

int dividir(int x,int y){
    
    printf("Digite dois n�meros inteiros para serem dividos:\n ");
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &x);
    printf("\n Digite o segundo n�mero: ");
    scanf("%d", &y);
    printf("\n Os n�meros digitados foram: %d e %d. \n",x,y);
    int resultado;
    int resto;
    resultado = x/y;
    resto=x%y;
    printf(" \n Resultado: %d.\n E o resto da divis�o �: %d" ,resultado,resto);
    
}


int main()
{
    int x,y;
    dividir(x,y);

    return 0;
}