#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
int a,b,c;
double rt,rt1,rt2;
clrscr();
printf("\nEnter a: ");
scanf("%d",&a);
printf("\nEnter b: ");
scanf("%d",&b);
printf("\nEnter c: ");
scanf("%d",&c);
rt=(b*b)-(4*a*c);
rt=(sqrt(rt))/(2*a);
rt1=-(b+rt);
rt2=rt-b;
printf("\nFirst root = %0.2lf",rt1);
printf("\nSecond root = %0.2lf",rt2);
getch();
}