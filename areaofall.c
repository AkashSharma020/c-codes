#include<stdio.h>
#include<math.h>
int main()
{
    int side;
    int length;
    int breadth;
    int radius;
    int area;
    int perimeter;
    printf("Enter the radius of circle\n ");
    scanf("%d",&radius);
    area=3.14*radius*radius;
    perimeter=2*3.14*radius;
    printf("The area of circle = %d \n" ,area);
    printf("The perimeter of circle = %d\n ",perimeter);
    printf("Enter the length of rectangle\n ");
    scanf("%d",&length);
    printf("Enter the breadth of rectangle \n");
    scanf("%d",&breadth);
    area=length*breadth;
    perimeter=2*length+2*breadth;
    printf("The area of rectangle = %d\n" ,area);
    printf("The perimeter of rectangle = %d\n" ,perimeter);
    printf("Enter the side of square\n ");
    scanf("%d",&side);
    area=side*side;
    perimeter=4*side;
    printf("The area of square = %d \n",area);
    printf("The perimeter of square = %d ",perimeter);
    return 0;
    
    }