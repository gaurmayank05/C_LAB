#include<stdio.h>
#include<conio.h>
void main(){
int n,i,flag=0;
clrscr();
printf("Enter a number: ");
scanf("%d",&n);
for(i=2;i<=(n/2);i++)
{
if(n%i==0){
flag++;
break;
}
}
if(flag==0){
printf("%d is a prime number",n);
}
else{
printf("%d is not prime number",n);
}
getch();
}