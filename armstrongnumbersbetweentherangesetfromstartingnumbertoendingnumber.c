#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int number)
{
    int originalNumber, remainder, result = 0, n = 0;

    originalNumber = number;

    // Counting number of digits
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    // Calculating result
    while (originalNumber != 0)
    {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    return result == number;
}

int main()
{
    int start, end;

    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; ++i)
    {
        if (isArmstrong(i))
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
