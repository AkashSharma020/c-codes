#include<stdio.h>
#include<math.h>

int main()
{
    float x1;
    float x2;
    float y1;
    float y2;
    float distance;

    //Input coordinates for the first point

    printf("Enter x-coordinate of the first point: ");
    scanf("%f",&x1);
    printf("Enter y-coordinate of the first point: ");
    scanf("%f",&y1);
     //Input coordinates for the second point

     printf("Enter the x-coordinate of the second point: ");
     scanf("%f",&x2);
     printf("Enter the y-coordinate of the second point: ");
     scanf("%f",&y2);

     //Calculate the Euclidean distance

     distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

     //Output the result

     printf("The Euclidean distance is:%.2f\n",distance);
     return 0;


}