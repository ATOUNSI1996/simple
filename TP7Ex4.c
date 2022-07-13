#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int x,n,i,j,num;
    int *p1;
    int *p2;
    printf("entrer la taille du tableau :\n");
    scanf("%d",&n);
    int *tab;
    tab = malloc(n*sizeof(int));
    for(i = 0; i<n; i++)
    {
        printf("entrer la valeur %d : ",i);
        scanf("%d",&tab[i]);
    }
    p1 = tab;
    p2 = tab;
    for(i = 0; i<n; i++)
    {
        printf("%d ",tab[i]);
    }
    
    for(i = 0; i<n; i++)
    {
        for(j = i+1; j<n-1;j++)
        {
        if(*(p1+i) > *(p2+j))
        {
            num = *(tab+j);
            *(tab+j) = *(p1+i);
            *(p1+i) = num;
        }
        
        }
    }
    for(i = 0; i<n; i++)
    {
        printf("%d ",tab[i]);
    }
}  