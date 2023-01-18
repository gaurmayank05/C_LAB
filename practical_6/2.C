#include <stdio.h>
#include <conio.h>
int main()
{
    int A[50][50], B[50][50], C[50][50], n, i, j, k;
    //clrscr();

    // Size of array
    printf("Enter the size of matrix: ");
    scanf("%d", &n);

    // Matrix A
    printf("\nEnter the elements of matrix A:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    // Matrix B
    printf("\nEnter the elements of matrix B:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    // Calculation for addition
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    // Result
    printf("\nAddition of two arrays A and B is\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }

    // Calculation for Multiplication
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                C[i][j] = C[i][j] + ((A[i][k]) * (B[k][j]));
            }
        }
    }

    // Results
    printf("\nMultiplication of two arrays A and B is\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    //getch();

    return 0;
}