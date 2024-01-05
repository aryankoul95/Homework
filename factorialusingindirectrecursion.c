#include <stdio.h>

// Declaration of functions
int factorialA(int n);

int factorialB(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorialA(n - 1);
    }
}

int factorialA(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorialB(n - 1);
    }
}

int main()
{
    int num;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    int result = factorialA(num);
    printf("Factorial of %d is: %d\n", num, result);

    return 0;
}
