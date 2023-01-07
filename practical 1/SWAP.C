// 7. Program that swaps the values of two variables without using a 3rd variable.
#include<stdio.h>
#include<conio.h>
void main(){
int a,b;
clrscr();
printf("Enter the value of a: ");
scanf("%d",&a);
printf("Enter the value of b: ");
scanf("%d",&b);
printf("a=%d\nb=%d\n",a,b);
printf("after swaping\n");
a=a+b;
b=a-b;
a=a-b;
printf("a=%d\nb=%d",a,b);
getch();
}