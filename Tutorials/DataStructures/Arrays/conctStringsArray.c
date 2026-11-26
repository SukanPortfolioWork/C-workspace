#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void){

    char my1Str[50]= "This is the first way.";
    char my2Str[]= "This is the second way.";

    strcat(my1Str,my2Str);

    printf("my1str: %s\n", my1Str);
   
    return 0;
}