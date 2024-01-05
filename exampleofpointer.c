// title of program
// program of example of pointers
// header file
#include <stdio.h>
// main function heading
void main()
{
    // variable name declaration and assignment of value
    int i = 10;
    // pointer declaration
    int *p;
    // taking the address of of i and store in P
    p = &i;
    // output statements
    printf("I=%d\n", i);
    printf("I=%d\n", *p);
    printf("I=%d\n", p);
}