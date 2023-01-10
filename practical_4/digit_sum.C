#include<stdio.h>
#include<conio.h>
void main(){
int n,sum=0;
clrscr();
printf("Enter a number: ");
scanf("%d",&n);
while(n){
sum=sum+(n%10);
n=n/10;
}
printf("%d",sum);
getch();
}