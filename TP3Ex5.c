#include <stdio.h>


int main() {
   int i,n;
   int f = 1;
    printf("entrer la valeur de n \n");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        f = f*i;
    }
    printf("le factorielle de %d est %d ",n,f);
}