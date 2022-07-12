#include <stdio.h>

int change_signe(int *a)
{
    int res = 1;
    res *(-1);
    return res;
}

int main() 
{
    int i;
    int tab[3] = {8, 5, 7};
    for (i = 0; i<3; i++)
    {
        printf("%d ",change_signe(&tab[i]));
    }
    /*for (i = 0; i<3; i++)
    {
        printf("%d ",tab[i]);
    }*/
}  