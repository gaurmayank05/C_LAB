#include<stdio.h>
#include<conio.h>
void main(){
int n1,n2;
int *p1,*p2;
void mul(int,int);
clrscr();
printf("Enter a number: ");
scanf("%d %d",&n1,&n2);
p1=&n1;
p2=&n2;
mul(*p1,*p2);
}
void mul(int x,int y){
int mult=x*y;
int *p3;
p3=&mult;
printf("%d",*p3);
getch();
}