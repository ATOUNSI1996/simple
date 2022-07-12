#include <stdio.h>

int main() 
{
    int i,j;
    //Declaration d'une chaine
   char chaine1 [10];
   int n =10 ;
   char c; 
 

    printf("entrer votre chaine de caractere \n ");
    scanf("%s",chaine1);

    int nb_occ = 0;
    printf("entrer le caractere a traiter \n ");
    scanf("%c",&c);  
   for(i = 0; i < n; i++)
   {
        if(chaine1[i] == c)
       nb_occ++;
   }  
    

    

}