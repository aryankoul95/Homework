//title of program
//program to fibd if a no. is palindrome or not
//header file
#include<stdio.h>
//main function heading
void main()
{
//variable declaration and assignment of value
int n,rev=0,rem,palin;
//input statement from user
printf("Enter an integer number");
scanf("%d",&n);
//assiogning a value
palin=n;
//while loop statement
while(n!=0)
{
//statements for checking if a no. is palindrome or not
rem=n%10;
rev=rev*10+rem;
n/=10;
}
//if else condition
if(palin==rev)
//output statement
printf("%d is a palindrome",palin);
else
{
//output statement
printf("%d is not a palindrome",palin);
}
}