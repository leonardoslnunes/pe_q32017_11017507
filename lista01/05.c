#include <stdio.h>

//divide dois números

int dividir(int x,int y){
    
    printf("Digite dois números inteiros para serem dividos:\n ");
    printf("Digite o primeiro número: ");
    scanf("%d", &x);
    printf("\n Digite o segundo número: ");
    scanf("%d", &y);
    printf("\n Os números digitados foram: %d e %d. \n",x,y);
    int resultado;
    int resto;
    resultado = x/y;
    resto=x%y;
    printf(" \n Resultado: %d.\n E o resto da divisão é: %d" ,resultado,resto);
    
}


int main()
{
    int x,y;
    dividir(x,y);

    return 0;
}