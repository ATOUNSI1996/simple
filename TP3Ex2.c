#include <stdio.h>
int main() {
   int i;
   do
   {
    printf("entrer un nombre positif et multiple de 3: \n");
    scanf("%d", &i);
   } while ((i<0) || (i % 3 !=0));
    
}