#include <stdio.h>

// Function to calculate factorial
unsigned long long factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

// Function to calculate sum of squares of factorial of a number using recursion
unsigned long long sumOfSquaresOfFactorial(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        unsigned long long fact = factorial(num);
        return (fact * fact) + sumOfSquaresOfFactorial(num - 1);
    }
}

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    unsigned long long result = sumOfSquaresOfFactorial(number);
    printf("Sum of squares of factorial of %d is: %llu\n", number, result);

    return 0;
}
