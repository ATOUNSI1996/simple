#include <stdio.h>
int main() {
   int i;
   int n = 100;
   for(i = 1; i <=n; i++)
   {
    if(i % 2 == 0)
    {
        printf("Le nombre paire est %d \n", i);
    }
   }
}
