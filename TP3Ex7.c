#include <stdio.h>
#include <math.h>

int CalculPgcd(int n1, int n2)
{
    int i1 = 2;
    int i2 = 2;
    int n;
    int res1 = 1;
    int res2 = 1;
    int res = 1;
   do
   {
    i1++;
   } while ((n1 % i1) != 0);
   
   do
   {
    i2++;
   } while ((n2 % i2) != 0);

   if(i1 == i2)
   {
    res *= i1*i2;
   }

    return res;
}

int main() {
    int n1,n2;
    printf("entrer le premier entier : \n");
    scanf("%d",&n1);
    printf("entrer le deuxieme entier : \n");
    scanf("%d",&n2);
    printf("le PGCD du premier et deuxieme entier est : %d \n",CalculPgcd(n1,n2));
}