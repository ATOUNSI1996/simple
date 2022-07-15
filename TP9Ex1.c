#include <stdio.h>

struct point {
    int x;
    int y;
    int z;
};


int main()
{
    struct point A = {1, 2, 3};
    struct point B = {5, 7, 9};
    struct point C = {8, 6, 3};
    
    printf("Les coordonnees de A sont : %d, %d, %d\n", A.x, A.y, A.z);
    printf("Les coordonnees de B sont : %d, %d, %d\n", B.x, B.y, B.z);
    printf("Les coordonnees de C sont : %d, %d, %d\n", C.x, C.y, C.z);

    return 0;
}