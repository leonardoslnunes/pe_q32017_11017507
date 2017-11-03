#include <stdio.h>
int soma_v (int * v1, int * v2)
{
    int v3[5];
    for (int i = 0; i<5; ++i)
    {
        v3[i] = *(v1+i) + *(v2+i);    
    }
    
    for (int i = 0; i<5; ++i)
    {
        printf(" %d",v3[i]);    
    }
    printf("\n");
}


int main ()
{
    int v1[5];
    int v2[5];
    
    int x = 0;
    for (int i = 0; i<5; ++i)
    {
        scanf("%d",&x);
        v1[i]=x;
        ++x;
    }
    printf("\n");
    
    x=0;
    for (int i = 0; i<5; ++i)
    {
        scanf("%d",&x);
        v2[i]=x;
        ++x;
    }
    printf("\n");
    
    int * ptr_v1;
    ptr_v1 = v1;
    int * ptr_v2;
    ptr_v2 = v2;
    
    soma_v(ptr_v1,ptr_v2);
}