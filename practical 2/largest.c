// 2. Program to find the greatest of three numbers.
#include<stdio.h>
#include<conio.h>
void main(){
int n1,n2,n3;
clrscr();
printf("\nEnter first number: ");
scanf("%d",&n1);
printf("\nEnter second number: ");
scanf("%d",&n2);
printf("\nEnter third number: ");
scanf("%d",&n3);
if((n1>n2)&&(n1>n3)){
printf("Largest number is %d",n1);
}
else if(n2>n3){
printf("Largest number is %d",n2);
}
else{
printf("Largest number is %d",n3);
}
getch();
}