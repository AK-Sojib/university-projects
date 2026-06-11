//Write a program that takes two matrix and display sum and sub

#include<stdio.h>
int main()
{
    int i,j,numberOfRows,numberOfCols;

    int A[10][10],B[10][10],C[10][10];

    printf("Enter the number of rows and column = ");
    scanf("%d %d",&numberOfRows,&numberOfCols);
    //Scanning A matrix
    printf("Enter elements for A matrix = \n");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    //Scanning B matrix
    printf("Enter elements for B matrix = \n");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    //Printing A Matrix
    printf("A = ");
    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    //Printing B Matrix
    printf("\nB = ");
    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    //Adding the Matrix

    for(i=0; i<numberOfRows; i++)
    {

        for(j=0; j<numberOfCols; j++)
        {
           C[i][j] = A[i][j] + B[i][j];//C[i][j] = A[i][j] - B[i][j];
        }
    }
    printf("\n");
    //Printing C Matrix
    printf("A + B = ");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
        printf("\t");
    }

    return 0;
}
