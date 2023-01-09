/* 2. Write a program to display the color name according to the code entered. The coding scheme is as follows
1: “RED”
2: “GREEN”
3: “WHITE”
4: “YELLOW”
5: “ORANGE”
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    char op;
    clrscr();
    printf("Enter a code (r,g,w,y,o) : ");
    scanf("%c", &op);
    if ((op == 'r' || op == 'g' || op == 'w' || op == 'y' || op == 'o'))
    {
        switch (op)
        {
        case ('r'):
            printf("RED");
            break;
        case ('g'):
            printf("GREEN");
            break;
        case ('w'):
            printf("WHITE");
            break;
        case ('y'):
            printf("YELLOW");
            break;
        case ('o'):
            printf("ORANGE");
            break;
        }
    }
    else
    {
        printf("You have enter wromg code");
    }
    getch();
}