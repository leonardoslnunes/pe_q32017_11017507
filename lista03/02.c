#include <stdio.h>
#include <stdlib.h>

int len(char *end_palavra)
{
    int i = 0;
    while(*(end_palavra+i)!='\0')
        ++i;
    return i;
}


void inverte(char *end_palavra)
{
    int l1 = len(end_palavra);
    
    char invertida[l1];
    
    for (int i = 0; i<=l1; ++i)
    {
        invertida[i] = *(end_palavra+(l1-i));
    }
    
    for (int i = 0; i<=l1; ++i)
    {
        printf("%c",invertida[i]);
    }
    
}


int main ()
{
    char palavra[100];
    fgets(palavra,100,stdin);
    char *ptr_palavra;
    ptr_palavra=palavra;
    inverte(ptr_palavra);
    printf("\n");
 
    return 0;
}
