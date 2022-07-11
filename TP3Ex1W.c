#include <stdio.h>
int main() {
   int i = 1;
   int n = 100;
   while(i <= n)
   {
    if(i % 2 == 0)
    {
        printf("Le nombre paire est %d \n", i);
    }
        i++;
   }
}