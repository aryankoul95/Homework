#include <stdio.h>
void main()
{
    int marks;
    printf("Enter the marks");
    scanf("%d", &marks);
    char ch;
    printf("If the handwriting is good or bad");
    scanf("%c%c", &ch, &ch);
    if (ch == 'Y')
    {
        marks = marks + 10;
    }
    if (ch == 'N')
    {
        marks = marks - 10;
    }
    printf("Your marks are %d", marks);
}