#include <stdio.h>

void main() {
   // printf() displays the string inside quotation
   printf("Hello, World!");

    //Déclaration des variables et initialisation 
    int x=2;
    int y = 1;
    int z,n;

    //saisi de n 
    printf("Donner un entier n : ");
    scanf("%d",&n);  


    //Calcul de la suite

    if(n == 0)
    {
        printf("la valeur est 2");
    } 
    else if(n == 1)
    {
        printf("la valeur est 3");
    } 
    else 
    {
    int i ;
    for (i=2; i <=n; i++)
    {
         z = 2*y + x;
         y = z;
         x = y;
        
    }

    //Affichage du r&sultat 
    printf("La valeur de suite est : %d", z);
    }
}