#include <stdio.h>
#include <string.h>


int main() 
{
    int i;
    int majus = 0;
    int minus = 0;
    int autre = 0;
    char ch[5];
    printf("entrer votre chaine : \n");
    scanf("%s",ch);

    printf("votre chaine est : %s \n",ch);
    for(i = 0; i<5; i++)
    {
        if(ch[i] != '\0')
        {
            if(ch[i] >= 97 && ch[i] <= 122)
            {
                minus++;
            }
            else if(ch[i] >= 65 && ch[i] <= 90)
            {
                majus++;
            }
            else
            {
                autre++;
            }
        }

    }
    printf("%d %d %d",minus,majus,autre);

}  
