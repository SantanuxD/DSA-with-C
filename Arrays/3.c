//LA is a linear array with N elements. Write the algorithm to finds the largest number and counts the occurrence of the largest number
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
    int max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==max){
            count+=1;
        }
    }
    printf("Largest number is %d and occurrence is %d \n",max,count);
}