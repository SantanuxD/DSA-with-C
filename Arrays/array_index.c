//Write an algorithm that takes as input the size of the array and the elements in the array and a particular index and prints the element at that index.

#include<stdio.h>
void main()
{
    int n,index;
    printf("Enter the size of the array : \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the index whose element you want to display : \n");
    scanf("%d",&index);
    printf("The element is : %d \n",a[index]);
}
