//title of program
//program to find greatest of three numbers by using nested if
//header file
#include<stdio.h>
//function heading
void main()
{
//variable declaratipon
int a,b,c;
// input statement from user
printf("Enter three numbers");
scanf("%d%d%d",&a,&b,&c);
//if condition
if(a>b)
{
if(a>c)
{
//output statement
printf("The greatest number is=%d",a);
}
//else statement
else
{
//output statement
printf("The greatest number is=%d",c);
}
}
//else statement
else
{
//if condition
if(b>c)
{
//output statement
printf("The greatest number is=%d",b);
}
//else statement
else
{
//output statement
printf("The greatest number is=%d",c);
}
}
}