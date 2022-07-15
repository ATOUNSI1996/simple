#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void majuscule(char *ch)
{
    int i =0;
    while(*(ch+i) != '\0')
    {
        if(*(ch+i) >= 97 && *(ch+i) <= 122)
        {
            *(ch+i)-=32;
        }
        i++;
    }    
}

void calcul(int *a)
{
    *a=*a+10;
}
int main() 
{

int b = 20 ;
calcul(&b);
printf("b = %d ",b);
  /*  char* ch1;
    int i,n;
    printf("entrer la taille n : \n");
    scanf("%d",&n);
    ch1=malloc(n*sizeof(char));
    printf("entrer votre chaine : \n");
    scanf("%s",ch1);
    
    majuscule(ch1); 
    printf("ch1=%s\n", ch1);*/
}  
