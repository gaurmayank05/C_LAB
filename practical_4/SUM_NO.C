#include<stdio.h>
#include<conio.h>
void main(){
int n,i,sum=0;
clrscr();
printf("Enter a number: ");
scanf("%d",&n);
for(i=0;i<=n;i++){
sum=sum+i;
}
printf("\n%d",sum);
getch();
}