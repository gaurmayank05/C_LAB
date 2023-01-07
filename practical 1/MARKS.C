// 2.Program to accept the marks of 5 subjects and finds the sum and percentage marks obtained by the student.
#include<stdio.h>
#include<conio.h>
void main(){
int m1,m2,m3,m4,m5,sum;
float per;
clrscr();
printf("Enter five subjects marks:\n");
scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
sum=m1+m2+m3+m4+m5;
per=sum/5.0;
printf("Total marks is %d\n",sum);
printf("Percentage is %0.2f",per);
getch();
}
