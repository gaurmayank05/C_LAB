// 1.	Program to read two integer and two floating point numbers.
#include<stdio.h>
#include<conio.h>
void main(){
int n1,n2;
float n3,n4;
clrscr();
printf("Enter two integers\n");
scanf("%d %d",&n1,&n2);
printf("Enter two float numbers\n");
scanf("%f %f",&n3,&n4);
printf("Entered numbers are:\n");
printf("%d\n%d\n%f\n%f",n1,n2,n3,n4);
getch();
}