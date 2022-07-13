#include <stdio.h>
#include <string.h>

int main() 
{
    int i;
    int l = 0;
    char ch[10];
    printf("entrer votre chaine : \n");
    scanf("%s",ch);

    printf("votre chaine est : %s",ch);
    for(i = 0; i<10; i++)
    {
        printf("\n%c",ch[i]);
        if(ch[i] != '\0')
        {
        l++;
        }
    }

    printf("%d",l);
}  
