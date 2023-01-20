// 3.	Program that finds the sum of diagonal elements of a m x n matrix.
#include <stdio.h>
#include <conio.h>
void main()
{
    void daigonal(int[][50],int,int);
    int arr[50][50], i, j, r, c;
    clrscr();
    printf("\nEnter the numbers of row: ");
    scanf("%d", &r);
    printf("\nEnter the number of column: ");
    scanf("%d", &c);
    // Scanning the elements of matrix
    printf("\nEnter the elements of matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    daigonal(arr,r,c);
}

void daigonal(int a[][50], int row, int column)
{

    int i, j, sum = 0;
    if (row == column)
    {
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < column; j++)
            {
                if (i == j)
                {
                    sum += a[i][j];
                }
            }
        }
    }
    printf("Sum of diagonal= %d", sum);
    getch();
}