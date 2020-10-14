//LA is a linear array with N elements. Write the algorithm to copy the elements from LA to a new array LB

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of array : \n");
    scanf("%d",&n);
    int a[n];
    int b[n];
    printf("Enter the elements of the array : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    printf("Copied array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}
