#include <stdio.h>
#include <math.h>
int puissance(int x, int n)
{
    int res = 1;
    res = pow(x, n);
    return res;
}

int main() {
   int x,n;
    printf("entrer la valeur de x \n");
    scanf("%d",&x);
    printf("entrer la valeur de n \n");
    scanf("%d",&n);
    printf("la valeur de %d puissance %d est %d",x,n,puissance(x,n)); 


}