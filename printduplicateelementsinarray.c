//title of program
//program to print duplicate elements in array
//header file
#include<stdio.h>
//main function heading
int main()
{
//variable declaratiom
int n;
//input statement from user
printf("Enter limit:");
scanf("%d",&n);
//variableaa(array) declaration
int a[n],b[n],i,j;
//input statement from user
printf("Enter elements:");
//for loop statement
for(i=0;i<n;i++)
{
//statement for storing values
scanf("%d",&a[i]);
//assignment of value for array'B'
b[i]=0;
}
//output statement
printf("Duplicate elements are.....\n");
//nested loop statement
for(i=0;i<n;)
{
//assignment of value
int flag=0;
//if statement
if(b[i]==0)
{
for(j=i+1;j<n;j++)
{
//if statement
if(a[i]==a[j])
{
//assignment of values
flag=1;
b[j]=1;
}
}
//if else statement
if(flag==1)
//output statement
printf("%d\n",a[i]);
//increment statement
i++;
}
else
//increment statement
i++;
}
}