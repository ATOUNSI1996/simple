#include <stdio.h>

void echange1 (int *x, int *y) {
int z;
z=*x;
*x=*y;
*y=z;
}



int main() 
{
    int a = 2;
    int b = 3;
    echange1 (&a , &b);
    printf("les valeurs de a et b après échange sont %d et %d ", a,b);

}  
    

    

