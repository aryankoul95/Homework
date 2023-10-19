#include <stdio.h>
void main()
{
    int a, b, big;
    printf("Enter the two numbers");
    scanf("%d%d", &a, &b);
    big = a > b ? a : b;
    printf("The greatest number is = %d", big);
}