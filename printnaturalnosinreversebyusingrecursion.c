//title of program
//program to print natural no.`s  in reverse by using recursion
//header file
#include<stdio.h>
//void function heading for printing natural numbers in reverse
void display(int);
//main function heading
void main()
{
//variable declaration
int limit;
//input statement from user
printf("\n Enter the limit to print the natural number:");
scanf("%d",&limit);
display(limit);
}
//void function calling
void display(int x)
{
//if else statement
if(x<0)
//return statement
return;
else
//output statement
printf("%d\n",x);
display(x-1);
}