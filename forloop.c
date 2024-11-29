#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    for(int i=1; i<=n; i=i+1)
    {
        printf("%d ",i*i);
    }
    return 0;
}