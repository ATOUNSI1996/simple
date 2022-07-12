#include <stdio.h>
int main()
 
{
 
    char prenom[10];
 
    printf("Comment t'appelles-tu petit Zero ? ");
 
    scanf("%s", prenom);
 
    //printf("Salut %s, je suis heureux de te rencontrer !", prenom);
 
    int i ; 
    for (i=0; i<10; i++ )
        printf("prenom[%d]=%c \n",i,prenom[i]);

    return 0;
 
}