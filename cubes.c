#include <stdio.h>
void main()
{
    int i, n;
    printf("Enter the number we want to find cube of :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Cube = %d", i * i * i);
    }
}