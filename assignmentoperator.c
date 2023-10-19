#include <stdio.h>
void main()
{
    int a = 45, b = 55;
    a += b > 55 ? a == 55 : b == 45;
    printf("ANS =%d", a + b);
}