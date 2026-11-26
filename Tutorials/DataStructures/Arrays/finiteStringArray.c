#include <stdio.h>
#include <math.h>

int main(void){

    char myString[20];
    
    printf("Enter: ");
    scanf("%s",myString);

    int i =0;
    while(myString[i] != '\0' ){
        
        if (myString[i] == '0'){
            printf("found 0\n ");
        }    
        i++;
    }
   
    printf(" myString: %s\n", myString);

    return 0;
}