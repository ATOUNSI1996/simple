#include <stdio.h>

int main() 
{
    int i,j,tmp;
    //Declaration d'un tableau
   int tab [5];
   int n =5 ; 
 
   for(i = 0; i < 5; i++)
   {
       printf("entrer le %d element \n ",i);
       scanf("%d",&tab[i]);
   }
    
    for(i = 0; i < n; i++)
    {
        printf("%d ",tab[i]);
    }


    for(i = 0; i < n-1; i++)
    {
        for(j = i+1; j<n; j++)
        {
            if(tab[i] > tab[j])
            {
            tmp = tab[i];
            tab[i] = tab[j];
            tab[j] = tmp;
            }
        }
    }

    printf("tableau trié : ");
    for(i = 0; i < n; i++)
    {
        printf("%d ",tab[i]);
    }
        
    

    

}