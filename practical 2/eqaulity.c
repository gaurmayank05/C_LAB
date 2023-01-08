// 1. Program that checks whether the two numbers entered by the user are equal or not.
#include<stdio.h>
#include<conio.h>
void main(){
int n1,n2;
clrscr();
printf("Enter first number: ");
scanf("%d",&n1);
printf("Enter second number: ");
scanf("%d",&n2);
if(n1==n2){
printf("\nBoth numbers are equal\n");
}
else{
printf("Numbers are not equal");
}
getch();
}