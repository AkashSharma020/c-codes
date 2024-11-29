#include<stdio.h>
int main()
{
    int j,i,n;
    printf("Enter a number = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1||i==i || j==1 || j==i){
                printf("*");

            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
}  