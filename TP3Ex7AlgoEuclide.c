#include <stdio.h>
#include <math.h>

int minimum(int n1, int n2) 
{
    int min = n1;
    if(n2 < n1) 
    {
    printf("n2 est plus petit que n1 \n");
     min = n2;
    }
    return min;
}

int main() {
    int n1,n2;
    int PGCD = 1;
    printf("entrer le premier entier : \n");
    scanf("%d",&n1);
    printf("entrer le deuxieme entier : \n");
    scanf("%d",&n2);
    if((n1 % n2) == 0)
    {
        printf("le PGCD de n1 et n2 est : %d",minimum(n1,n2));
    }
    else
    {
    do
    {
        n1 = n2;
        n2 = (n1 % n2);
    }while((n1 % n2) != 0);
    printf("le PGCD de n1 et n2 est : %d",minimum(n1,n2));
    }
}