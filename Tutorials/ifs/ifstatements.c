#include<stdio.h>

int main(void)
{
    int grade = 0;
    
    printf("Grade: ");
    scanf("%d",&grade);
    
    if(grade = -1){
        if(grade >= 90) printf("A\n");
        else if (grade >= 80) printf("B\n");
        else if (grade >= 70) printf("C\n");
        else if (grade >= 60) printf("D\n");
        else if(grade >= 50) {printf("Pass\n");
            printf("Congrats! \n");
        }
        else{   
            printf("Fail\n");
        }
        printf("And done\n");
    }
        

    return 0;
}

