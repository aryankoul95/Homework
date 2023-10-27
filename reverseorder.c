#include <stdio.h>
void main()
{
    int number, reverse = 0, remainder;
    printf("Enter the number");
    scanf("%d", &number);
    while (number != 0)
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }
    printf("Reverse of the given number : %d", reverse);
}