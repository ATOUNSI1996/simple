#include <stdio.h>


int main() 
{
    int x,n,i,j,num;
    int *p1 = NULL;
    int *p2 = NULL;

    printf("entrer la taille du premier tableau :\n");
    scanf("%d",&n);

    int *tab1;
    int *tab2;
    int *tab3;
    tab1 = malloc(n*sizeof(int));
    tab2 = malloc(n*sizeof(int));
    tab3 = malloc(n*sizeof(int));
    for(i = 0; i<n; i++)
    {
        printf("entrer la valeur %d : ",i);
        scanf("%d",&tab1[i]);

    }
   
    for(i = 0; i<n; i++)
    {
        if(tab1[i] > 0)
        {
            tab2[i] = tab1[i];
        }
        else if(tab1[i] < 0)
        {
            tab3[i] = tab1[i];
        }
        printf("%d ",tab2[i]);
        printf("%d ",tab3[i]);

    }
}  