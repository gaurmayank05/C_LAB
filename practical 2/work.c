/* 5.	The working hours based on age of the laborer is given
        Age			Working Hour
        0-10			0
        11-15			0
        16-20			3
        21-25			6
        >25			8
	Write a program to calculate working hour of a person for a given age.
*/
#include<stdio.h>
#include<conio.h>
void main(){
int age;
clrscr();
printf("Enter your age: ");
scanf("%d",&age);
if(age<16){
printf("\nWorking hour is 0");
}
else if((age>15)&&(age<21)){
printf("\nWorking hour is 3");
}
else if((age>=21)&&(age<=25)){
printf("\nWorking hour is 6");
}
else{
printf("\nWorking hour is 8");
}
getch();
}