#include <stdio.h>
#include <math.h>

int puissance(int x, int n)
{
    int res = 1;
    res = pow(x, n);
    return res;
}

int main() {
    int i,n;
    printf("entrer la valeur de n \n");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("%d  %d  %d \n",i,puissance(i,2),puissance(i,3));
    }

}