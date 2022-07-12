#include <stdio.h>

int main() 
{
    int i;
    //Declaration d'un tableau
   int tab [5];
 
   for(i = 0; i < 5; i++)
   {
       printf("entrer le %d element \n ",i);
       scanf("%d",&tab[i]);
   }
    
    for(i = 0; i < 5; i++)
    {
        printf("%d ",tab[i]);
    }

    int min = tab[0];
    int max = tab[0];
    int som = 0;
    for(i = 0; i < 5; i++)
    {
        if(tab[i] < min)
        min = tab[i];
        else if(tab[i] > max)
        max = tab[i];
        som += tab[i];
        
    }

    printf("min = %d , max = %d , somme = %d ",min,max,som);

}