#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    int i,n;
    // int majus = 0;
    // int minus = 0;
    // int autre = 0;

    printf("entrer taille de chaine : \n");
    scanf("%d",&n);
    char *ch;
    ch = malloc(n*sizeof(char));

    printf("entrer votre chaine : \n");
    scanf("%s",ch);

    printf("votre chaine est : %s \n",ch);
    for(i = 0; i<n; i++)
    {
        if(*(ch+i) != '\0')
        {
            if(*(ch+i) >= 97 && *(ch+i) <= 122)
            {
                minus++;
            }
            else if(*(ch+i) >= 65 && *(ch+i) <= 90)
            {
                majus++;
            }
            else
            {
                autre++;
            }
        }

    }
    printf("%d %d %d",minus,majus,autre);

}  
