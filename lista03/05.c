#include <stdio.h>
#include <stdlib.h>

void fill(int *v, int n)
{   
    int i=0;
    while(i<n)
    {
        scanf("%d",(v+i));
        ++i;
    }
}

int check (int *copias, int n, int valor)
{
    for(int i = 0 ; i < n; ++i){
	    if(*(copias+i) == valor){   
	        *(copias+(i+n))+=1;
	        i=0;
	        return 0;
	    }
    }
    return 1;
}

int repete(int *ptr_v, int *copias, int n)
{
    for(int i = 0; i < n; ++i){
        if(check(copias,n,*((ptr_v)+i))){
            *(copias+i) = *((ptr_v)+i);
            *(copias+(n+i)) = 1;
        }
    }
}

int printar(int *copias, int n)
{
   for(int i=0 ; i<n; ++i)
        if(*(copias+i+n)>1)
        printf("%d-%d ",*(copias+i),*(copias+i+n));
}

int main()
{
    int n;
    scanf("%d",&n);
    int *ptr_v;
    ptr_v = malloc(n*sizeof(int));
    int *copias; 
    copias = malloc(sizeof(int)*(2*n));
    fill(ptr_v,n);
    repete(ptr_v,copias,n);
    printar(copias,n);
    printf("\n");
    return 0;
}