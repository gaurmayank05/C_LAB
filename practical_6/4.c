// 4.	Program to find the transpose of a matrix.
#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[50][50], n, i, j;
    clrscr();
    printf("\nEnter the size of matrix: ");
    scanf("%d", &n);
    printf("\nEnter the elements of matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nBefore Transpose:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\nAfter transpose:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }
    getch();
}