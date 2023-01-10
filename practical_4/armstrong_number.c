#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int num,a_num,r,count=0,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    a_num=num;
    while(num!=0){
        count++;
        num/=10;
    }
    num=a_num;
    while(num!=0){
        r=num%10;
        sum=sum+pow(r,count);
        num/=10;
    }
    printf("\n%d",sum);
    if(a_num==sum){
        printf("\n%d is an armstrong number.",a_num);
    }
    else{
        printf("\n%d is not an armstrong number.",a_num);
    }
}