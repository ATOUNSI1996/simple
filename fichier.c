#include <stdio.h>







int main()
{
    FILE* fichier = NULL;

    int i = 0;
    char *ch;
    fichier = fopen("test.txt", "w");
    fputs("Bonjour", fichier);
    fclose(fichier);
    

    fichier = fopen("test.txt", "a");
    fputs(" depuis csf", fichier);
    fclose(fichier);

    fichier = fopen("test.txt", "r");
    while((*(ch+i)=fgetc(fichier))!=EOF)
    {
        printf("%c",ch);
        i++;
    }
    fclose(fichier);
    return 0;
}