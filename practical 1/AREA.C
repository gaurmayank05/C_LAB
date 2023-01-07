// 8. Program to calculate and print the area of triangle, where the three sides of the triangle is given as input.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
float a,b,c;
double s;
clrscr();
printf("enter the sides of triangle: ");
scanf("%f %f %f",&a,&b,&c);
s=(a+b+c)/2;
s=s*(s-a)*(s-b)*(s-c);
s=sqrt(s);
printf("Area of triangle %0.2lf",s);
getch();
}