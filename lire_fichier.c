#include <stdio.h>
#include <stdlib.h>

char* lecture (FILE *fichier){
    char *ch = malloc(1000*sizeof(char));
	char caractereActuel ;
    int i = 0 ;
        while (caractereActuel != EOF){

            caractereActuel = fgetc(fichier);
            *(ch+i) = caractereActuel;
            i++;
        } 
        return ch ;
}


int main(){

    FILE *fichier = NULL;
    char * chaine ;

    fichier = fopen("test.txt", "r");
 
    if (fichier != NULL)
    {
   	    chaine = lecture (fichier);
        printf(" la chaine est : %s\n", chaine); 
        fclose (fichier);
    }
 
    return 0;
}