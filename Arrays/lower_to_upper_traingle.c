//Design an algorithm to convert a lower triangular matrix to upper triangular matrix.

#include<stdio.h>
void main()
{
    int r,c,size=0;
    printf("Enter the number of rows and columns of the matrix : \n");
    scanf("%d %d",&r,&c);
    int a[r][c];
    int trans[c][r];
    printf("Enter the elements of the matrix : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Display the matrix entered : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%4d",a[i][j]);
            trans[j][i]=a[i][j];
        }
        printf("\n");
    }
    printf("Display the converted lower triangular matrix to upper traingle matrix : \n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            if(j<i)
            {
                printf("%4c",' ');
            }
            else
            {
                printf("%4d",trans[i][j]);
            }
        }
        printf("\n");
    }
}
