#include <stdio.h>
int main() {
    //Déclaration des variabes
    int n;
    bool premier = true;
    int i=2;
    
    //Saisi de n positif
    do
    {
        printf("entrer un nombre positif : \n");
        scanf("%d", &n);
    } while (n<0);
    
    //Vérification si n est premier ou pas 
    while ((i<=(int) n/2)||!premier)
    {
        //test si i divise n ou pas 
        if (n%i==0)
            premier = false ;
        i++;
   }

    //affichage du résultat
   if (premier)
        printf("%d est premier",n);
    else
        printf("%d n'est pas premier",n);
    
}       