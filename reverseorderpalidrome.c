#include <stdio.h>
void main()
{
    int number, reverse = 0, remainder, a;
    printf("Enter the number");
    scanf("%d", &number);
    a = number;
    while (number != 0)
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }
    if (a == reverse)
    {
        printf("It is a palidrome \n");
    }
    printf("Reverse of the given number : %d", reverse);
}