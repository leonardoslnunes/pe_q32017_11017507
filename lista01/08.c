#include <stdio.h>

//fibonacci

int fibonacci(int x){
    int resultado;
    
    if (x==0){
      resultado = 0;
    }
    else if (x==1){
      resultado = 1;
    }
    
    else{
      resultado = fibonacci(x-1)+fibonacci(x-2);
    }  
    
    return resultado;
    
}


int main()
{
    int numero;
    
    printf("Digite o número inteiro para calcular o seu fibonacci:\n ");
    scanf("%d", &numero);
    printf("\n O número digitado foi: %d \n",numero);
    printf(" \n Resultado, fibonacci de F%d = %d \n" ,numero,fibonacci(numero));
    return 0;
}