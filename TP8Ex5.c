#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int precedence(char *chaine1,char *chaine2)
{
    int i,n1,n2;  
    char *ch1;
    ch1 = malloc (n1*sizeof(char));
    char *ch2;
    ch2 = malloc (n2*sizeof(char));
    printf("entrer la taille n1 : \n");
    scanf("%d",n1);
    printf("entrer la taille n2 : \n");
    scanf("%d",n2);
    printf("entrer la chaine 1 : \n");
    scanf("%s",ch1);
    printf("entrer la chaine 2 : \n");
    scanf("%s",ch2);
    while(*ch1 != '\0' && *ch2 != '\0')
    {
        if(*ch1 < *ch2)
        {
            printf("La chaine ch1 precede ch2 \n ");
            return 1;
        }
        else if(*ch1 > *ch2)
        {
            printf("La chaine ch2 precede ch1 \n ");
            return 2;
        }
        else
        {
            printf("Les deux chaines ch1 et ch2 ayant la meme precedence \n ");
            return 0;
        }
    }
}

int main() 
{
    char ch1[10];
    char ch2[10];
    precedence(ch1,ch2); 
}  
