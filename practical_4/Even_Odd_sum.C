#include<stdio.h>
#include<conio.h>
void main(){
int n,i,e_sum=0,o_sum=0;
clrscr();
printf("Enter a number: ");
scanf("%d",&n);
for(i=0;i<=n;i++){
if(i%2==0){
e_sum=e_sum+i;
}
else{
o_sum=o_sum+i;
}
}
printf("\nSum of even numbers upto %d is %d",n,e_sum);
printf("\nSum of odd numbers upto %d is %d",n,o_sum);
getch();
}
