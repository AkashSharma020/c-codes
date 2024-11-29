#include<stdio.h>
int main()
{
    int sal;
    printf("Enter the salary = ");
    scanf("%d",&sal);
    if(sal<=2000)
    {
         printf("Total salary = %d",sal+(sal)/10+(sal)/5);
    }
    else if(sal>2000 && sal<=5000)
    {
        printf("Total salary = %d"sal+(sal)/10+(sal)/5);
    }
    else if(sal>5000 && sal<=10000)
    {
        printf("Total salary = %d",sal+(sal)/10+(sal)/5);
    }
    else 
    {
        printf("Total salary = %d",sal+(sal)/10+(sal)/5);
    }
    return 0;
}
