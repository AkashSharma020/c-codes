#include<stdio.h>
void getMessage(void);
int computeSimpleInterest(int,int,int);
int main()
{
    int p,r,t;
    printf("Enter P, R,T :");
    scanf("%d%d%d",&p,&r,&t);
    int si = computeSimpleInterest(p,r,t);
    printf("Simple Interest =  %d",si);
    return 0;
}
int computeSimpleInterest(int p, int r, int t){
    return (p*r*t)/100;
}
