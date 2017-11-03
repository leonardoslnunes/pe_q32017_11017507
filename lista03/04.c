#include <stdio.h>
int fill(int * m)
{
    int n = 1;
    int count = 0;
    for(int i = 0; i<9; ++i)
    {
        *(m+i)=n;
        printf("v[%d]=%d ",i,*(m+i));
        ++count;
        if(count==3)
        {
            printf("\n");
            count = 0;
        } 
        ++n;
    }
}

int transposta(int * m)
{
    int trans[4][4];
    int i = 0;
    for(int c = 0; c<3; ++c)
    {
        for (int l = 0; l<3; ++l)
        {
            trans[l][c] = *(m+i);
            ++i;
        }
    }
    printf("\n"); 
    for(int l = 0; l<3; ++l)
    {
        for (int c = 0; c<3; ++c)
        {
            printf("t[%d][%d]=%d ",l,c,trans[l][c]); // posicoes dos valores estao certos.. so esta imprimindo errado.
        }
        printf("\n");
    }
    
}

int main ()
{
    int matriz1[3][3];
    int ** ptr_m1;
    ptr_m1 = matriz1;
    
    fill(ptr_m1);
    transposta(ptr_m1);
    //imprimi(ptr_m1);
}