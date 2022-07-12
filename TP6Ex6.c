#include <stdio.h>


int main() 
{
    //declaration des variables et du pointeur et saisi de la taille du tableau
    int n,i;
    int *tab;
    scanf("%d",&n);
    //Allocation dynamique d'un tableau 
    tab = malloc(n*sizeof(int));

    //declaration des variables et du pointeur et saisi de la taille du tableau
    int n;
    int *tab;
    scanf("%d",&n);
    //Allocation dynamique d'un tableau  
    tab = malloc(n*sizeof(int));
    //initialisation des valeurs du tableau à 0
    for(i = 0; i<n; i++)
    {
        *(tab+i) = 0;
    }
    //liberation du pointeur
    free(tab);


}  