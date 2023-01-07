// 6.Program that swaps values of two variables using a third variable.
#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c;
clrscr();
printf("Enter the value of a: ");
scanf("%d",&a);
printf("Enter the value of b: ");
scanf("%d",&b);
printf("a = %d\nb = %d\n",a,b);
c=a;
a=b;
b=c;
printf("after swaping:\na = %d\nb = %d",a,b);
getch();
}