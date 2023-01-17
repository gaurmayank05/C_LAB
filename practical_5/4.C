//4.	Program to search an element in a array using Linear Search.
#include<stdio.h>
#include<conio.h>
void main(){
int A[50],i,n,s;
clrscr();
printf("Enter the size of array: ");
scanf("%d",&n);
printf("Enter the elements of array: ");
for(i=0;i<n;i++){
scanf("%d",&A[i]);
}
printf("Enter the number you want to search: ");
scanf("%d",&s);
for(i=0;i<n;i++){
if(A[i]==s){
printf("%dth element of array A",i);
}
if((i==n-1)&&(A[i]!=s)){
printf("search element is not there.");
}
}
getch();
}