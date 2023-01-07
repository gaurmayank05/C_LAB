// 4. Program to calculate the area and circumference of a circle
#include<stdio.h>
#include<math.h>

#include<conio.h>
void main(){
double r;
float cir,area;
clrscr();
printf("Enter radius:");
scanf("%lf",&r);
cir=2*3.14*r;
area=3.14*(pow(r,2));
printf("Circumference of Circle = %0.2lf\n",cir);
printf("Area of Circle = %0.2lf",area);
getch();
}
