//2.	Program that inputs two arrays and saves sum of corresponding elements of these arrays in a third array and prints them.
#include<stdio.h>
#include<conio.h>
void main(){
int A[50],B[50],C[50],n,i,sum=0;
clrscr();
printf("\nEnter number of elements for array: ");
scanf("%d",&n);
printf("\nEnter the elements of array A: ");
for (i=0;i<n;i++){
scanf("%d",&A[i]);
}
printf("\nEnter number elements of array B: ");
for(i=0;i<n;i++){
scanf("%d",&B[i]);
}
for(i=0;i<n;i++){
C[i]=A[i]+B[i];
}
printf("\nSum of corresponding elements is: \n");
for(i=0;i<n;i++){
printf("%d ",C[i]);
}
getch();
}