// title of program
// program of example of pointer of pointer
// header file
#include <stdio.h>
// main function heading
void main()
{
    // assignment of value(variable name)
    int i = 10;
    // taking the address of i and store in P
    int *P = &i;
    // taking the address of P and store in PP
    int **PP = &P;
    // output statements
    printf("I=%d\n", i);
    printf("I=%d\n", *P);
    printf("I=%d\n", **PP);
}