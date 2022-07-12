#include <stdio.h>






int main() 
{
    int x,n,i,j;
    int *p1 = NULL;
    int *p2 = NULL;
    printf("entrer la valeur de x :\n");
    scanf("%d",&x);
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
    p1 = &x;
    for(i = 0; i<n; i++)
    {
        if(*p1 == *(p2+i))
        {
            tab[i] = tab[i+1];
        }
        
    }
    for(i = 0; i<n; i++)
    {
        printf("%d ",tab[i]);
    }
}  