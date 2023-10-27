#include <stdio.h>
void main()
{
    int number, cube, digit, sum = 0, z;
    printf("Enter the number to find it's cube ");
    scanf("%d", &number);
    while (number != 0)
    {
        digit = number % 10;
        z = number;
        cube = digit * digit * digit;
        sum += cube;
        if (z / 10 == 0)
        {
            printf("%d cube is %d", digit, cube);
        }
        else
        {
            printf("%d cube is %d + ", digit, cube);
        }
        number = number / 10;
    }
    printf("\n");
    printf("Sum is = %d", sum);
}