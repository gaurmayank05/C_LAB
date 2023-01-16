// 4.User is going to enter a value from 1 to 7. day of the week should be displayed accordingly like 1 – Monday, 2 – Tuesday etc. Write a program for the same.
#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    clrscr();
    printf("Enter a number (between 1-7):  ");
    scanf("%d", &a);
    if (a <= 7)
    {
        switch (a)
        {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        }
    }
    else
    {
        printf("You have entered a wrong a code.");
    }
    getch();
}