#include <stdio.h>


int main() 
{
    //declaration des variables et du pointeur et saisi de la taille du tableau
    int n,m,i,j;
    int *tab;
    scanf("%d",&n);
    //Allocation dynamique d'un tableau 
    tab = malloc((n*m)*sizeof(int));

    //declaration des variables et du pointeur et saisi de la taille du tableau
    int n;
    int *tab;
    scanf("%d %d",&n,&m);
    //Allocation dynamique d'un tableau  
    tab = malloc((n*m)*sizeof(int));
    //initialisation des valeurs du tableau à 0
    for(i = 0; i<n; i++)
    {
        for(j = 0; j<m; j++)
        {
        *tab[i][j] = 0;
        }
    }
    //liberation du pointeur
    free(tab);


}  