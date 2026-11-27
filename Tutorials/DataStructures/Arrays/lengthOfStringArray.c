#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void){

    char myString[]= "This is the way.";

    int length = strlen(myString);
    int num_i_s = 0;
    
    for(int i= 0; i < length; i++ ){
        
        if (myString[i] == 'i'){
            num_i_s++;
        }    
    }
   
    printf("length: %d\n", length);
    printf("Number of i's: %d\n", num_i_s);
    

    return 0;
}