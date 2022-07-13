#include <stdio.h>


int main() 
{
    int n,i,j,tmp;
    int *p1 = NULL;
    printf("entrer la taille du premier tableau :\n");
    scanf("%d",&n);
    int *tab;
    tab = malloc(n*sizeof(int));

    for(i = 0; i<n; i++)
    {
        printf("entrer la valeur %d : ",i);
        scanf("%d",&tab[i]);

    }

    for(i = 0; i<n; i++)
    {
        printf("%d ",tab[i]);
    }
    p1 = tab;
    for(i = 0; i<n; i++)
    {
        if(*(p1+i) < *p1)
        {
            p1 = p1+i;
            printf("%d",i);
        }
    
    }

}  