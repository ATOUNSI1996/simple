
#include <stdio.h>
#include <stdlib.h>
void modif(int *b)
{
    *b =10;

}

int main(void)
{
    int a = 8;
    int *p ;
    p = &a; 
    *p = 20; 
        printf("a = %d\n", a);
    


    printf("TESSSSSSST ");  

    char ch[20];
    ch[0]='B';
    ch[1]='O';
    *(ch+2)='\0';
    printf("ch = .............. %s", ch);

 

    int b=20;
    modif(&b);
    printf("\n \n \n b= %d", b);


       free(p);
}


