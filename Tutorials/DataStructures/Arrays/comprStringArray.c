#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void){

    char my1Str[50]= "This is the first way.";
    char my2Str[]= "This is the second way.";

    if (strcmp(my1Str,my2Str) == 0){
        printf("my1str and my2str are equal\n");
    }
    else{
        printf("my1str and my2str are not equal\n");
    }


    return 0;
}