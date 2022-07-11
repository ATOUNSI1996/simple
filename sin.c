#include <stdio.h>
#include <math.h>
const eps = 0.00001 ;
    float sinus(float x)
    {
        float res = x;
        float t=x;
        int i=1;
        while (t>=eps)
        {
            t = (t*(-1)*pow(x,2))/((i+2)*(i+1));
            i=i+2;
            res += t ;
        }
        
        return res;
    }


int main() {
   // printf() displays the string inside quotation
        //saisi de n 
        float x ;
    printf("Donner x : ");
    scanf("%f",&x);

    printf("sin(%f) = %f",x,sinus(x));




   return 0;
}
