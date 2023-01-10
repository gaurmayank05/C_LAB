#include<stdio.h>
#include<conio.h>
void main(){
int n,i;
clrscr();
printf("Enter a number: ");
scanf("%d",&n);
while(n){
i=n%10;
n/=10;
printf("%d",i);
}
getch();
}