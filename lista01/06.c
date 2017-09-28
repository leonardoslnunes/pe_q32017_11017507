#include <stdio.h>

//fatorial de um n�mero

int fatorial(int x){
    int resultado;
    
    if (x==0){
      resultado = 1;
    }
    else{
      resultado = x*fatorial(x-1);
    }  
    
    return resultado;
    
}


int main()
{
    int numero;
    
    printf("Digite o n�mero inteiro para calcular o fatorial:\n ");
    scanf("%d", &numero);
    printf("\n O n�mero digitado foi: %d \n",numero);
    printf(" \n Resultado: %d.\n" ,fatorial(numero));
    return 0;
}