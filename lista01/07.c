#include <stdio.h>

//potencia de um n�mero elevado a um expoente

int exponencial(int x,int y){
    
    printf("Digite dois n�meros inteiros, primeiro a base depois expoente:\n ");
    printf("Digite a base: ");
    scanf("%d", &x);
    printf("\n Digite o expoente: ");
    scanf("%d", &y);
    printf("\n Os n�meros digitados foram: %d->base %d->expoente. \n",x,y);
    
    int resultado;
    int indefinido=0;
    double dResultado=0;
    
    //poss�veis contas
    if(y==0&&x==0){
      indefinido=1;
    }
    else if(y==0&&x!=0){
      resultado=1;
    }
    else if(x==0&&y!=0){
      resultado=0;
    }
    else if(x!=0&&y>0){
      resultado=x;
      for(int n=1;n!=y;++n){
        resultado = resultado*x;  
      }
    }
    
    //N�o consegui implementar base elevada a expoente negativo.
    
    /*else if(x!=0&&y<0){
      dResultado=(1/x);
      for(int n=1;n!=(y*-1);++n){
        dResultado = dResultado*(1/x);  
      }
    }*/
    
    
    //sele��o de resposta
    if (indefinido){
      printf("\n Zero elevado a zero � indefinido. \n");
    }
    
    //resposta para o caso de expoente negativo.
    /*else if(dResultado!=0){
      printf(" \n Resultado frac: %f ",dResultado);
    }*/
    
    else {
      printf(" \n Resultado: %d ",resultado);
    }
    
}


int main()
{
    int x,y;
    exponencial(x,y);

    return 0;
}