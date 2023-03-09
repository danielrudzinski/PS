#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{



    float x;
    float y;
    printf("podaj  liczbe \n");
    scanf("%f %f",&x ,&y);
   /* if(x>0)
    {
        printf( "wartosc signum %f to 1",x);
    }
     else if(x<0)
     {
         printf( "wartosc signum %f to -1",x);
     }
     else{
         printf( "wartosc signum %f to 0",x);
     }
*/
if(x>y)
{
    printf("wiekza liczba to %f",x);

}
else if(x<y)
{
     printf("wiekza liczba to %f",y);
}
else{
     printf("liczby s¹ równe  to %f",x);
}



    return 0;
}
