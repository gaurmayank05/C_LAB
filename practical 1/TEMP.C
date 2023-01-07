// 5.Program that accepts temperature in Centigrade and converts into Fahrenheit using the formula C/5 = (F-32)/9.
#include<stdio.h>
#include<conio.h>
void main(){
float C,F;
clrscr();
printf("Enter temperatur in centigrade: ");
scanf("%f",&C);
F=(C/5)*9+32;
printf("Temperature in Fahrenheit is %0.2f",F);
getch();
}
