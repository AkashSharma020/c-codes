#include<stdio.h>
#include<math.h>
int main()
{
    int s1,s2,s3,s4,s5;
    int percentage;
    printf("Enter the marks obtained in all subjects\n");
    printf("Subject 1 =");
    scanf("%d",&s1);
    printf("\nSubject 2 =");
    scanf("%d",&s2);
    printf("\nSubject 3 =");
    scanf("%d",&s3);
    printf("\nSubject 4 =");
    scanf("%d",&s4);
    printf("\nSubject 5 =");
    scanf("%d",&s5);
    printf("Total marks = %d",s1+s2+s3+s4+s5);
    printf("The Overall percentage of all the subjects = %d",(s1+s2+s3+s4+s5/5);
    return 0;
}