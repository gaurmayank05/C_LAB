//6.	Program to print the elements of the array in reverse order.
#include<stdio.h>
#include<conio.h>
void main(){
void rev(int [],int);
int A[50],i,n;
clrscr();
printf("Enter the size of an array: ");
scanf("%d",&n);
printf("\nEnter elements of array:");
for(i=0;i<n;i++){
scanf("%d",&A[i]);
}
rev(A,n);
}

void rev(int B[],int q){
int j;
printf("\nReverse order of an array: ");
for(j=q-1;j>=0;j--){
printf("%d ",B[j]);
}
getch();
}