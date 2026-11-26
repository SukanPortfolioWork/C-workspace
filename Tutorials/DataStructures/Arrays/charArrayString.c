#include <stdio.h>
#include <math.h>

int main(void){

    char myString[] = "This is my string.";
    
    for(int i= 0; i < 19; i++ )
    {
        if (myString[i] == '\0')
            printf("my string[%d] = nt \n", i);
        else
            printf("my string[%d] = %c \n", i, myString[i]);
    }
   
    printf("\n%s\n", myString);

    return 0;
}