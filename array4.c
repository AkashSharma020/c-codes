#include<stdio.h>
int main()
{
    int size;
    printf("Enter array size : ");
    scanf("%d",&size);
    int arr1[size];
    printf("Enter array elements : ");
    for(int i=0; i<size; i++){
        scanf("%d",&arr1[i]);
    }
    int arr2[size];
    for(int i=0; i<size; i++){
        arr2[i] = arr1[i];
    }
    printf("Array2 elements are : ");
    for(int i=0;i<size; i++){
        printf("%d ",arr2[i]);
    }

    return 0;
}