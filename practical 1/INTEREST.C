//Program to calculate the simple interest and compound interest (The Principal, Amount, Rate of Interest and Time are entered through keyboard).
#include<stdio.h>
#include<math.h>
#include<conio.h>
void main(){
double p,r,t,SI,CI;
clrscr();
printf("Enter the principal: ");
scanf("%lf",&p);
printf("\nEnter rate: ");
scanf("%lf",&r);
printf("\nEnter time: ");
scanf("%lf",&t);
SI=(p*r*t)/100;
SI=p+SI;
CI=p*((pow((1+r/100),t)));
printf("Simple Interest is: %0.2lf\n",SI);
printf("Compound Interest is: %0.2lf\n",CI);
getch();
}