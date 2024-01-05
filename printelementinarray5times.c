//title of program
//program to print the element in an array 5 times
//header file
#include<stdio.h>
//main function heading
void main()
{
int arr[10];
//variable declaration
int i,n;
//input statement from user
printf("Enter the size of an array");
scanf("%d",&n);
//nested loop statement
for(i=0;i<n;i++)
{
//input statement form user
printf("\n Enter the %d value of array",i);
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
//output statement
printf("\n %d%d%d%d%d",arr[i],*(i+arr),*(arr+i),*(i+arr),i[arr]);
}
}