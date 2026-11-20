#include<stdio.h>

int main(void)
{
    int speed = 20;
    int time = 7;
    float x = 5.2;
    double y = -9.8;
    int distance = speed * time;

    printf("dist: %d\n",distance);

    char c = 'd';
    scanf("%c", &c);
    printf("c: %c\n", c);
    printf("c: %d\n", c);

    
    return 0;

}