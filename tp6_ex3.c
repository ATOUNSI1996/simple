#include <stdio.h>
#include <stdlib.h>
void echange2 (int *x, int *y) 
{
    printf("\n echange2");
    int *z = malloc(sizeof(int));
    *z= *x;
    *x=*y;
    *y=*z;
    printf("*x = %d, *y = %d, *z=%d",*x,*y, *z);
}

int main() 
{
     printf("test");
    int a = 2;
    int b = 3;
    echange2(&a,&b);
    printf("a = %d, b = %d",a,b);
}