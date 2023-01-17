//1.	Program that simply takes elements of the array from the user and finds the sum of these elements.
#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[50], n, i, sum = 0;
    clrscr();
    printf("Enter the number of elements of array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    printf("sum of elements of a array is %d", sum);
    getch();
}