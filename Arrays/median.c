// Write an algorithm that takes as input the size of the array and the elements in the array and find the median of the elements in the array.


#include <stdio.h>

void swap(int *p,int *q) {
   int t;
   
   t=*p; 
   *p=*q; 
   *q=t;
}

void sort(int a[],int n) { 
   int i,j,temp;

   for(i = 0;i < n-1;i++) {
      for(j = 0;j < n-i-1;j++) {
         if(a[j] > a[j+1])
            swap(&a[j],&a[j+1]);
      }
   }
}

int main() {
   int n;
   printf("Enter the size of array : \n");
   scanf("%d",&n);
   int a[n];
   printf("Enter the elements : \n");
   for(int x=0;x<n;x++)
   {
       scanf("%d",&a[x]);
   }
   int sum,i;

   sort(a,n);
   
   n = (n+1) / 2 - 1;    

   printf("Median = %d ", a[n]);

   return 0;
}
