#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    char* ch;
    int i,n;
    printf("entrer la taille n : \n");
    scanf("%d",&n);
    ch=malloc(n*sizeof(char));
    printf("entrer votre chaine : \n");
    scanf("%s",ch);
    
    i =0;
    while (ch[i] != '\0')
    {
        if (ch[i] == ((char)-123))
        {
            
            ch[i] = 'a';
        }
        printf("%c",ch[i]);
        i++;
    }
    return 0;
}

