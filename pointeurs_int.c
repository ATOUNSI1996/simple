
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int n ;
    do
    {
        printf("entrer un nombre positif : \n");
        scanf("%d", &n);
    } while (n<0);    

    int *p = malloc(n * sizeof(int));

    if (p == NULL)
    {
        printf("Échec de l'allocation\n");
        return EXIT_FAILURE;
    }

    for (unsigned i = 0; i < n; ++i)
    {
        p[i] = i * 10;
        //printf("p[%u] = %d\n", i, p[i]);
    }

    for (unsigned i = 0; i < n; ++i)
    {

        printf("p[%u] = %d\n", i, *(p+i));
    }
    free(p);
    return 0;
}