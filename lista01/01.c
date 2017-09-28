#include <stdio.h>

//par, ímpar

int parImpar(int x){
    
    printf("O número digitado foi considerado: %d \n",x);
    
    if(x%2==0){
        printf( "Seu número é par.");
    }
    else{
        printf("Seu número é ímpar.\n");
    }
}


int main()
{
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    parImpar(numero);

    return 0;
}
