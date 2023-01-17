//5.	Program to sort the elements of the array in ascending order using Bubble Sort technique.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[50],n,i,pass,j,temp;
    clrscr();
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("enter the element of array:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(pass=0;pass<n;pass++)
    {
	 for(j=0;j<n-pass;j++)
	 {
	   if(a[j]>a[j+1])
	   {
	    temp=a[j+1];
	   a[j+1]=a[j];
	   a[j]=temp;
	}
	 }
    }
      printf("array after bubble sort:\n");
    for(i=0;i<n;i++)
    {
	printf("%d ",a[i]);
    }
    getch();
}
