#include <stdio.h>
#include <stdlib.h>
int vogais(char * end_entrada)
{
    int n = 0; 
    int m = 0; //numero de vogais;
    while(*(end_entrada+m)!='\0')
    {
        switch(*(end_entrada+m)) 
        {
            case 'a':
                ++n;
                break;
            
            case 'e':
                ++n;
                break;
        
            case 'i':
                ++n;
                break;
            
            case 'o':
                ++n;
                break;
            
            case 'u':
                ++n;
                break;
        }
        ++m;
    }
    
    return n;
}

int main ()
{
    char string[255];
    fgets(string,255,stdin);
    printf("%s",string);
    
    char *ptr_string;
    ptr_string = string;
    
    printf("vogais = %d\n",vogais(ptr_string));
    
    return 0;
}