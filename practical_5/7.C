//7.	Write a program to find the sum of even numbers in the array.
#include<stdio.h>
#include<conio.h>
void main(){
void sum(int [],int);
int A[50],i,n;
clrscr();
printf("Enter the size of the array: ");
scanf("%d",&n);
printf("\nEnter the elements of array: ");
for(i=0;i<n;i++){
scanf("%d",&A[i]);
}
sum(A,n);
}

void sum(int B[],int m){
int sum=0,i;
for(i=0;i<m;i++){
if(B[i]%2==0){
sum=sum+B[i];
}
}
printf("Sum of even elements = %d",sum);
getch();
}