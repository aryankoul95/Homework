//title of program
//program to print numbers inside and outside the block
//geader file
#include<stdio.h>
//assigning value
int i=30;
//main function heading
void main()
{
 //variable(auto) declaration(inside the block)
auto int i=19;
{
 //variable(auto) declaration(outside the block)
auto int i=20;
 //output statement (inside the block)
printf("Inside the block =%d\n",i);
}
//output statement (outside the block)
printf("Outside the block =%d\n",i);
}