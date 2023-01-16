// 1. Write a Program to read two numbers and an operator (+, -, *, /) which performs the specified operation and display the result
#include <stdio.h>
#include <conio.h>
void main()
{
    float a, b;
    char op;
    clrscr();
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("\nEnter an opertor (+,-,*,/) :  ");
    fflush(stdin);
    scanf("%c", &op);
    printf("\nEnter second number: ");
    scanf("%f", &b);
    switch (op)
    {
    case '+':
        printf("%.2f %c %.2f = %.2f", a, op, b, a + b);
        break;
    case '-':
        printf("%.2f %c %.2f = %.2f", a, op, b, a - b);
        break;
    case '*':
        printf("%.2f %c %.2f = %.2f", a, op, b, a * b);
        break;
    case '/':
        if (b != 0)
        {
            printf("%.2f %c %.2f = %.2f", a, op, b, a / b);
        }
        else
        {
            printf(" value of b can't be equal to 0");
        }
        break;
    }
        getch();
}