#include <stdio.h>
void main()
{
    int age;
    printf("Enter the age");
    scanf("%d", &age);
    if (age >= 18 && age <= 50)
    {
        if (age > 18 && age <= 25)
        {
            printf("Eligible for grade A job");
        }
        else
        {
            printf("Eligible for grade B job");
        }
    }
    else
    {
        printf("You are not eligible");
    }
}