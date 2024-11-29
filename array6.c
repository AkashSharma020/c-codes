#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter row and column size : ");
    scanf("%d%d",&row,&col);
    int arr[row][col];
    printf("Enter array elements : ");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++){
            scanf("%d",&arr[i][j]);

        }
    }
    for(int i=0; i<row; i++)
    {
        int sum=0;
        for(int j=0; j<col; j++){
            sum+=arr[i][j];
        }
        printf("Sum of %d row is %d\n",i,sum);
    }
    for(int i=0; i<col; i++)
    {
        int sum=0; 
        for(int j=0; j<row; j++){
            sum+=arr[j][i];
        }
        printf("Sum of %d column is %d\n",i,sum);
    }
    return 0;
}