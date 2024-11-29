#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter row and column size : ");
    scanf("%d%d",&row,&col);
    int arr[row][col];
    printf("Enter Array elements : ");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum=0;
    for(int i=0; i<row; i++){
        sum+=arr[i][i];

    int sum1=0;
    for(int i=0; j=col-1; j<row j>=0; i++j--){
        sum+=arr[i][i];
    }
    printf("Sum off main diagonls are : %d\n",sum);
    printf(" Sum of minor diagonals emelments are %d\n",sum1);
    return 0;
}