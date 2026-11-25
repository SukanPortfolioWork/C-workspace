#include <stdio.h>
#include <math.h>
// 
// index: 0 1 2 3 4 
// grade: 2 4 7 8 1 
// 
int main(void){

    int rGrade[5] = { 92, 85, 72, 73, 95};
    int grade[5];
    
    int total = 0;
    
    for(int i= 0; i <= 4; i++ )
    {
        grade[i] = rGrade[i];
        printf("grade[%d]=%d\n", i , grade[i]);
        total += grade[i];

        printf("average: %d\n", total/5);
    
    }
    printf("totals: %d\n", total);
    printf("\n\n\n\ntotals: %d average: %d\n", total, total/5);
    return 0;
}