//title of program
//program to perform addition,subtraction,multiplication,division by using 4 categories of functions
//header file
#include<stdio.h>
//main function heading
void main()
{
//function taking for add,sub,mul,div respectively
int add(int,int);
int sub();
void mul(int,int);
void div();
//variable declaration
int a,b,c;
//input statement from user
printf("Enter two numbers");
scanf("%d%d",&a,&b);
//function calling for performing addition
c=add(a,b);
//output statement for addition
printf("Sum=%d\n",c);
//function calling for subtraction
c=sub();
//output statement for subtraction
printf("Subtract=%d\n",c);
//function taking for multiplication and division
mul(a,b);
div();
}
//function taking for addition(with arguments)
int add(int x, int y)
{
//statement for performing addition
int z=x+y;
//return statement for addition
return z;
}
//calling calling for subtraction
int sub()
{
int x,y;
//input statement from user
printf("Enter two numbers");
scanf("%d%d",&x,&y);
//statement for performing subtraction
int z=x-y;
//return statement for subtraction
return z;
}
//function taking for multiplication
void mul(int x,int y )
{
//input statement from user
printf("Enter two numbers");
scanf("%d%d",&x,&y);
//statement for performing multiplication
int z=x*y;
//output statement for multiplication
printf("Mul=%d\n",z);
}
//function taking for division
void div()
{
//variable declaration
int x,y;
//input statement from user
printf("Enter two numbers");
scanf("%d%d",&x,&y);
//if else statement for division
if(y!=0)
{
//statement(if part)
int z=x/y;
//output statement for division
printf("Div=%d\n",z);
}
else
//output statement(else part)
printf("Infinite");
}