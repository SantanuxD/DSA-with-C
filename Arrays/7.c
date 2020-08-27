//Write an algorithm to add the original sparse matrix with the transpose of the same matrix.

#include<stdio.h>
void main()
{
    int r,c,size=0;
    printf("Enter the number of rows and columns of the matrix : \n");
    scanf("%d %d",&r,&c);
    int a[r][c];
    int trans[c][r];
    int addm[c][r];
    printf("Enter the elements of the matrix : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j] != 0)
            {
                size++;
            }
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
    int sparseMatrix[size+1][3];
    int k = 1;
    sparseMatrix[0][0] = r; //filling no. or rows
    sparseMatrix[0][1] = c; //filling no. or columns
    sparseMatrix[0][2] = size; //filling no. of non-zero values
    for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
        if (a[i][j] != 0) 
        {
            sparseMatrix[k][0] = i;
            sparseMatrix[k][1] = j;
            sparseMatrix[k][2] = a[i][j];
            k++;
        }

    printf("Display the sparse matrix : \n");
    for(int i=0;i<(size+1);i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%4d",sparseMatrix[i][j]);
        }
        printf("\n");
    }

    printf("Display the transpose matrix : \n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%4d",trans[i][j]);
        }
        printf("\n");
    }

    if(c!=(size+1) && r!=3)
    {
        printf("Addition not possible \n");
    }
    else
    {
        
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            addm[i][j]=sparseMatrix[i][j]+trans[i][j];
        }
    }
    printf("Display the added matrices : \n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%4d",addm[i][j]);
        }
        printf("\n");
    }

    }
    
}