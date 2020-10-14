//Design an efficient data structure to store data for tri-diagonal matrix.

#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,r,c;
printf("Enter the number of rows and column : \n");
scanf("%d %d",&r,&c);
int mat[r][c];

printf("Entered the elements of the matrix :\n\n");
for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
        {
        scanf("%d",&mat[i][j]);
        }
    }

printf("Entered matrix is:\n\n");
for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
        {
        printf("%d\t",mat[i][j]);
        }
    printf("\n");
    }

printf("\nTridiagnal matrix:\n\n");
printf("%d\t%d\n",mat[0][0],mat[0][1]);
for(i=1;i<r;i++)
    {
    for(k=1;k<i;k++)
        {
        printf("\t");
        }
    if(i==(r-1))
        printf("%d\t%d\n",mat[r-1][c-2],mat[r-1][r-1]);
    else
        {
        for(j=i;j<5;j++)
            {
            if(i==j)
            printf("%d\t%d\t%d",mat[i][j-1],mat[i][j],mat[i][j+1]);
            }
        printf("\n");
        }
    }
}
