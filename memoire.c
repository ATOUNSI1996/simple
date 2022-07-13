#include <stdio.h>
#include <stdlib.h>
int G1 = 256;
int G2;

int main() 
{
    int i,j;
    int n = 0;
    int m = 1;
    int *p;
    int *q;
    int *r;
    p = malloc (sizeof(int));
    q = malloc (2*sizeof(int));
    r = &m;
    *q = m;
    *(q+1) = n;
    printf("les adresses de G1, G2, i, j, n, m sont %x %x %x %x %x %x:",&G1,&G2,&i,&j,&n,&m);
    //printf("\n les adresses pointé par p q et r sont : %d %d %d ",p,q,r);

    // free(p);
    // free(q);


}  