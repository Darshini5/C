#include<stdio.h>

int main()
{
    int number;

    printf("Enter a Number to calculate Cube:");
    scanf("%d", &number);    
    
    printf("Cube of %d is %d", number, number*number*number);

    return 0;
}