
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int n ;
    do
    {
        printf("entrer un nombre positif : \n");
        scanf("%d", &n);
    } while (n<0);    

    char *ch = malloc(n * sizeof(char));

    if (ch == NULL)
    {
        printf("Échec de l'allocation\n");
        return EXIT_FAILURE;
    }

    printf("Comment t'appelles-tu petit Zero ? ");
 
    scanf("%s", ch);

    printf("Salut %s, je suis heureux de te rencontrer !", ch);

    printf("ch[5]=%c", *(ch+5));
    free(ch);
    return 0;
}