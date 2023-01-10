#include<stdio.h>
#include<conio.h>
void main(){
int n,i,sum=0;
int a=0,b=1;
clrscr();
printf("Enter a number: ");
scanf("%d",&n);
printf("%d\t%d\t",a,b);
for(i=1;i<n;i++){
sum=a+b;
printf("%d\t",sum);
a=b;
b=sum;
}
getch();
}