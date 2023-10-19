#include <stdio.h>
void main()
{
    int i = 0, j, k;
    printf("Enter the j value for table to print");
    scanf("%d", &j);
    do
    {
        k = i * j;
        printf("%d*%d = %d\n", i, j, k);
        ++i;
    } while (i < 10);
}
