#include <stdio.h>

struct cmplx {
    float re;
    float im;

};


struct cmplx saisieComplexe1()
{
    struct cmplx res;
    printf("entrer re : \n");
    scanf("%f", &res.re);
    printf("entrer im : \n");
    scanf("%f", &res.im);
    return res;
}

struct cmplx addition(struct cmplx A,struct cmplx B)
{
    struct cmplx res;

    res.re = (A.re + B.re);
    res.im = (A.im + B.im);

    return res;
}

void affichage(struct cmplx A)
{
    printf("Le nombre complexe est : %f + i %f",A.re,A.im);
}




int main()
{
    struct cmplx P ;
    struct cmplx Q ;
    struct cmplx Z;
    P= saisieComplexe1();
    Q= saisieComplexe1();
    Z = addition(P, Q);
    affichage(Z);

    return 0;
}