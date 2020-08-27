//LA is a linear array with N elements. Write the algorithm to transpose the array
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of array : \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Elements in reverse order are : \n");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}
