#include <stdio.h>
#include <stdlib.h>

int main() 
{
    printf("size int : %d && unsigned int : %d ", sizeof(int), sizeof(unsigned int));


    int x,n,i,j;
    int *p1;
    int *p2;
    printf("entrer la valeur de x :\n");
    scanf("%d",&x);
    printf("entrer la taille du tableau :\n");
    scanf("%d",&n);
    int *tab;
    tab = malloc(n*sizeof(int));
    for(i = 0; i<n; i++)
    {
        printf("entrer la valeur %d : ",i);
        scanf("%d",(tab+i));

    }
    for(i = 0; i<n; i++)
    {
        printf("%d ",*(tab+i));
    }
    p1 = tab;
    p2=tab ;
    for(i = 0; i<n; i++)
    {
        if(*p1 != x)
        {
            *p2=*p1;
           
            p2++;
        }
        p1++;

        
    }
    int to_save = p2 - tab ;
    

    printf("\nto_save = \n %d \n",to_save); 
    for(i = 0; i<n; i++)
    {
        printf("%d ",tab[i]);
    }

    tab = realloc(tab,sizeof(int)*to_save);


    printf("\nApres realloc \n ........................\n\n"); 
    for(i = 0; i<to_save; i++)
    {
        printf("%d ",tab[i]);
    }
}  