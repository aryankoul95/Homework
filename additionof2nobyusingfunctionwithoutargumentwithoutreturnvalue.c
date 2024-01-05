#include <stdio.h>

// Function to perform addition without arguments and return value
void addition()
{
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum of %d and %d is: %d\n", num1, num2, sum);
}

int main()
{
    printf("Performing addition of two numbers without using arguments or return value:\n");

    // Calling the function to perform addition
    addition();

    return 0;
}
