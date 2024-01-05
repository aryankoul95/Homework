//title of program
//program to delete the element in an array
//header file
#include<stdio.h>
//main function heading
void main()
{
// array and variable declaration
int arr[30],i,num,loc;
//input statement from user
printf("Enter the size of array");
scanf("%d",&num);
//input statement from user
printf("Enter the elements %d:",num);
//for statement
for(i=0;i<num;i++)
{
//input statement from user
scanf("%d",&arr[i]);
}
//input statement from user
printf("Enter the location to delete the value:");
scanf("%d",&loc);
//while loop statement
while(loc<num)
{
//statement for deleting the element in an array
arr[loc-1]=arr[loc];
//increment statement
loc++;
}
//decrement statement
num--;
//for loop statement
for(i=0;i<num;i++)
//output statement
printf("\n %d",arr[i]);
}