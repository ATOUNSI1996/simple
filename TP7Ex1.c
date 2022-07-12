//Valeur de a, b, c, *p1, *p2
a, b, c, *p1 et *p2 contenant des valeurs alèatoire
//a = 1, b = 2, c = 3
a = 1;b = 2; c = 3;
*p1 et *p2 contenant des valeurs alèatoire
//p1 = &a, p2 = &c;
a = 1;b = 2; c = 3; *p1 = 1; *p2 = 3;
//*p1 = (*p2)++;
a = 1;b = 2; c = 3; *p1 = 3; *p2 = 4;
//p1 = p2;
a = 1;b = 2; c = 3; *p1 = 3; *p2 = 4;
//p2 = &b
a = 1;b = 2; c = 3; *p1 = 3; *p2 = 2;
//*p1 -= *p2
a = 1;b = 2; c = 3; *p1 = 1; *p2 = 2;
//++*p2
a = 1;b = 2; c = 3; *p1 = 1; *p2 = 3;
//*p1 *= *p2
a = 1;b = 2; c = 3; *p1 = 3; *p2 = 3;
//a = ++*p2 * *p1
a = 12;b = 2; c = 3; *p1 = 3; *p2 = 3;
//p1 = &a
a = 12;b = 2; c = 3; *p1 = 12; *p2 = 3;
//*p2 = *p1 /= *p2
a = 12;b = 2; c = 3; *p1 = 12; *p2 = 4.0;
