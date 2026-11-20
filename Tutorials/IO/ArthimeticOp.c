#include<stdio.h>

int main(void)
{
    double x = 11.0 , y = 3.0;
    int xi = 11, yi = 3;
    double mult = x * y;
    double add = x + y;
    double div = x / y;
    double sub = x - y;


    int mod = xi % yi;
    
    printf("multiplication: %f\n",mult);

    printf("addition: %f\n",add);

    printf("divition: %f\n",div);

    printf("subtraction: %f\n",sub);

    printf("MODULUS: %d\n",mod);


    return 0;

}