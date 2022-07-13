#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void majuscule(char *chaine)
{
    int i,n;
    char *ch;
    ch = malloc (n*sizeof(char));
    printf("entrer la taille n : \n");
    scanf("%d",n);
    printf("entrer votre chaine : \n");
    scanf("%s",ch);
    while(*(ch+i) != '\0')
    {
        if(*(ch+i) >= 97 && *(ch+i) <= 122)
        {
            *(ch+i)-=32;
        }
    }

    // for(i = 0; i < 10; i++)
    // {
    //     printf("%s",*(ch+i));
    // }
    
}

int main() 
{
    char ch1[10];
    majuscule(ch1); 
}  
