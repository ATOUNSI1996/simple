#include <stdio.h>


int main() 
{
    //declaration des variables et du pointeur et saisi de la taille du tableau
    int i,j;
    int mat[3][3];

    int som = 0;
    float moy = 0;
    printf("entrer les elements de la matrice : \n");
    for(i = 0;i < 3; i++)
    {
        for(j = 0;j < 3; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i = 0;i < 3; i++)
    {
        for(j = 0;j < 3; j++)
        {
            printf("%d ",mat[i][j]);
            if(j % 2 == 0);    
        }
        printf("\n");
    }  


    int min = mat[0][0];
    int max = mat[0][0];

    for(i = 0;i < 3; i++)
    {
        for(j = 0;j < 3; j++)
        {
            if(mat[i][j] < min)
            {
                min = mat[i][j];
            }
            else if (mat[i][j] > max)
            {
                max = mat[i][j];
            }

        som += mat[i][j];
        }
    }
    moy = som / 9;
    printf("%d %d %d %f",min,max,som,moy);
}  