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

int cmpfunc (const void * a, const void * b)
{
    return (*( int*)a - *(int*)b);
}

int mediana(int *ptr_v, int n)
{
    if(n%2!=0)
        printf("%.2f",(float)*(ptr_v+(n/2)));
    else{
        float k = *(ptr_v+(n/2))+*(ptr_v+1+(n/2));
        printf("%.2f",k/2);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int *ptr_v;
    ptr_v = malloc(n*sizeof(int));
    fill(ptr_v,n);
    qsort (ptr_v ,n , sizeof(int), cmpfunc);
    mediana(ptr_v,n);
    printf("\n");
    return 0;
}