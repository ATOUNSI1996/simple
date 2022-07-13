#include <stdio.h>


int main() 
{
    int x,n,i,j,num;
    int *p1 = NULL;
    int *p2 = NULL;
    printf("entrer la taille du tableau :\n");
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
    
    for(i = 0; i<n; i++)
    {
        for(j = i+1; j<n-1;j++)
        {
        if(*(p1+i) > *(p2+j))
        {
            num = *(p2+j);
            *(p2+j) = *(p1+i);
            *(p1+i) = num;
        }
        printf("%d ",tab[i]);
        }
        
    }
    for(i = 0; i<n; i++)
    {
        printf("%d ",tab[i]);
    }
}  