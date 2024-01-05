// title of program
// program to print the address of marks
// header file
#include <stdio.h>
// main function heading
void main()
{
    // assiognment of value
    int i = 0;
    // array variable declaration
    int marks[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // assignment of marks
    marks[0] = 80;
    marks[1] = 60;
    marks[2] = 85;
    marks[3] = 75;
    marks[4] = 45;
    marks[5] = 90;
    marks[6] = 89;
    marks[7] = 87;
    marks[8] = 96;
    marks[9] = 100;
    marks[10] = 105;
    // for loop statement
    for (i = 0; i < 10; i++)
    {
        // output statements
        printf("\n Marks [%d]:%d", i, marks[i]);
    }
    printf("\n Marks [%d]:%d", i, &marks[i]);
}