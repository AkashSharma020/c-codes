#include<stdio.h>
int main()
{
    int sum=0;
    int arr[4][3]={{10,10,10},{10,10,10},{10,10,10},{10,10,10}};
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++){
            sum=sum+arr[i][j];
        }
        
    }
    printf("%d",sum);
    return 0;
}