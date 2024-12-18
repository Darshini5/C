#include <stdio.h>

//Perimeter of Rectangle

int main()
{
    int length, breadth;

    printf("Enter length and breadth:\n");
    scanf("%d %d", &length,&breadth);

    // printf("Enter length of rectangle : \n");
    // scanf("%d", &length);
    
    // printf("Enter breadth of rectangle : \n");
    // scanf("%d", &breadth);

    printf("Perimeter of Rectangle is : %d", 2*(length + breadth));

    return 0;
}