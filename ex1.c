#include <stdio.h>

int factorielle(int n)
{
    int i ;
    int res = 1;
    for (i=1; i <=n; i++)
    {
        res*=i;
    }

    return res;
}
void main() {
   // printf() displays the string inside quotation
   printf("Hello, World!");

    //Déclaration des variables et initialisation 
    int n;
    int som =0;
    

    //saisi de n 
    printf("Donner un entier n : ");
    scanf("%d",&n);

    //Calcul de la somme 
    int i ;
    for (i=1; i <=n; i++)
    {
        som += i;
        
    }

    //Affichage du r&sultat 
    printf("La somme est : %d", som);
    printf("Le produit est : %d", factorielle(n));



}