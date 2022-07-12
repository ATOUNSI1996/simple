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


    for(i = 0; i < n; i++)
    {
        for(j = 0; j<n-i-1; j++)
        {
            if(tab[j] > tab[j+1])
            {
            tmp = tab[j];
            tab[j] = tab[j+1];
            tab[j+1] = tmp;
            }
        }
    }

    printf("tableau trié : ");
    for(i = 0; i < n; i++)
    {
        printf("%d ",tab[i]);
    }
        
    

    

}