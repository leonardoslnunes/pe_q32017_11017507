#include <stdio.h>

//par, �mpar

int parImpar(int x){
    
    printf("O n�mero digitado foi considerado: %d \n",x);
    
    if(x%2==0){
        printf( "Seu n�mero � par.");
    }
    else{
        printf("Seu n�mero � �mpar.\n");
    }
}


int main()
{
    int numero;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);
    parImpar(numero);

    return 0;
}
