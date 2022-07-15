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
void ajouter_article()
{
    //declaration variabl e
    FILE* f = NULL;
	struct article A;

    //ouverture fichier en mode ecriture 
    f = fopen("test1.dat", "a");

    //saisi de l article 
    printf("entrer id : \n");
    scanf("%d",&A.id);
    printf("entrer name : \n");
    scanf("%s",&A.name);
    printf("entrer prix : \n");
    scanf("%f",&A.prix);
    printf("votre article a ete ajouté\n");
    nbA++;

    //ecriture article dans un ficheir 
    fwrite (&A, sizeof(struct article), 1, f);

    //fermeture fichier 
    fclose(f);
}

void modifier_article()
{
    printf("donner l id de l article a modifier : ");
    int code ;
    scanf("%d",&code);

    FILE* f = NULL;
	struct article A;

    //ouverture fichier en mode ecriture 
    int i = recherche(code) ; 
    if (i>-1)
    {
        f = fopen("test1.dat", "r+b");
        fseek(f,sizeof(struct article)*i,SEEK_SET);
        fread(&A, sizeof(struct article), 1, f);



        printf("nouveau name est: \n");
        scanf("%s",&A.name);
        printf("nouveau prix est : \n");
        scanf("%f",&A.prix);

        fseek(f,sizeof(struct article)*i,SEEK_SET);
        fwrite (&A, sizeof(struct article), 1, f);

    



                affichage(A);
                //ecriture article dans un ficheir 
                
                printf("votre article a ete modifié\n");
        }

	// close file
	fclose (f);



}

int recherche(int code)
{
    FILE* f = NULL;
	struct article A;

    //ouverture fichier en mode ecriture 
    f = fopen("test1.dat", "r+b");
    int i = 0 ; 

	// read file contents till end of file
	while(fread(&A, sizeof(struct article), 1, f))
    {
        printf("A.id = %d ", A.id);
		if (A.id == code)
            return i ;
        i++;
    }

	// close file
	fclose (f);


    return -1 ;
}

void supprimer_article(struct article *A)
{
    printf("donner l id de l article a supprimer : ");
    int code ;
    scanf("%d",&code);
    int pos = recherche(code);
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
void lister_article()
{

    //declaration variabl e
    FILE* f = NULL;
	struct article A;

    //ouverture fichier en mode ecriture 
    f = fopen("test1.dat", "r");
    int i = 0 ; 
    printf("id      nom     prix\n");
    printf("--------------------\n");
	// read file contents till end of file
	while(fread(&A, sizeof(struct article), 1, f))
		printf ("%d     %s      %f\n", A.id, A.name, A.prix);

	// close file
	fclose (f);



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


	return 0;

}
