#include <stdio.h>
#include <stdlib.h>

int nbA = 0 ;
struct article
{
	int id;
	char name[20];
	float prix;
};

void affichage(struct article A)
{
    printf("%d      %s      %f \n",A.id,A.name,A.prix);
}
void ajouter_article(struct article *A)
{
    printf("entrer id : \n");
    scanf("%d",&A->id);
    printf("entrer name : \n");
    scanf("%s",&A->name);
    printf("entrer prix : \n");
    scanf("%f",&A->prix);
    printf("votre article a ete ajouté\n");
    nbA++;
}

void modifier_article(struct article * A)
{
    printf("donner l id de l article a modifier : ");
    int code ;
    scanf("%d",&code);
    int pos = recherche(A,code);
    if (pos !=-1)
    {
        printf("nouveau name est: \n");
        scanf("%s",&A[pos].name);
        printf("nouveau prix est : \n");
        scanf("%f",&A[pos].prix);
        printf("votre article a ete modifié\n");
    }
}

int recherche(struct article *A, int code)
{
    int i =0;
    while (i < nbA)
    {
        if (A[i].id == code)
            return i ; 
        i++;
    }
    return -1 ;
}

void supprimer_article(struct article *A)
{
    printf("donner l id de l article a supprimer : ");
    int code ;
    scanf("%d",&code);
    int pos = recherche(A,code);
    if (pos !=-1)
    {
        
        while (pos<nbA-1)
        {
            A[pos]=A[pos+1];
            pos++;
        }
        nbA--;

    }
}
void lister_article(struct article *A)
{
    int i = 0 ; 
    printf("id      nom     prix\n");
    printf("--------------------\n");
    for (i =0; i<nbA; i++)
    {
        affichage(A[i]);
    }
}

void continuer()
{
    char tmp;
    printf("taper n'importe quel touche pour continuer : ");        
    scanf("%s",&tmp);
}

int main ()
{
    struct article A[20];
    int choix=1 ;

while(choix >= 1 && choix <6)
{
    printf("************************************************************************\n");
    printf("*1- Ajouter article                                                    *\n");
    printf("*2- Modifier article                                                   *\n");
    printf("*3- Supprimet article                                                  *\n");
    printf("*4- Afficher article                                                   *\n");
    printf("*5- Lister article                                                     *\n");
    printf("*6- Quitter                                                            *\n");
    printf("************************************************************************\n\n\n");

    printf("Donner votre choix : ");
    scanf("%d",&choix);

    switch(choix){
        case 1: 
            ajouter_article(&A[nbA]);
            break;
        case 2:

            modifier_article(A);
            
            break;
        case 3: 
            supprimer_article(A);
            break;
        case 4: 
            printf("donner la position de l article a afficher : ");
            int j ;
            scanf("%d",&j); 
            if (j<nbA)
                affichage(A[j]);
            break;
        case 5: 
            lister_article(A);
            continuer();
            break;
        case 6: 
           // quitter_article(A);
            break;
        
        default :
            printf("mauvais choix!!! Svp inserer votre choix de nouveau");

    }
    }

   /* ajouter_article(A);
    //modifier_article(A);
   // supprimer_article(A);
    lister_article(A);
    // struct article B[20];
    //affichage(A);


ajouter_article(&A[nbA]);
ajouter_article(&A[nbA]);

lister_article(A);*/

	return 0;

}
