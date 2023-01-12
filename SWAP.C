#include<stdio.h>
#include<conio.h>
void main(){
void swap(int*,int*);
int n1,n2;
clrscr();
printf("Enter two numbers: ");
scanf("%d %d",&n1,&n2);
printf("Before swap:\nn1=%d\nn2=%d",n1,n2);
swap(&n1,&n2);
printf("\nafter swap:\nn1=%d\nn2=%d",n1,n2);
getch();
}

void swap(int *p1,int *p2){
int var;
var=*p2;
*p2=*p1;
*p1=var;
}