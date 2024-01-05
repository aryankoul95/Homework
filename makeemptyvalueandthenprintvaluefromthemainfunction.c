//title of program 
//program to take empty value and then print value from the main function
//function heading
int fun(int arr[])
{
//initializing value
int i;
//for loop statement
for(i=0;i<5;i++)
{
//assignment of value
arr[i]=arr[i]+10;
}
}
//main function heading
void main()
{
//array(variable) declaration
int arr[5],i;
//for loop statement
for(i=0;i<5;i++)
{
//input statement from user
printf("Enter the array elements arr[%d]",i);
scanf("%d",&arr[i]);
}
//output statement
printf("Printing entire array......");
fun(arr);
//forloop statement
for(i=0;i<5;i++)
{
//output statement  for after  function calling a value 'a'
printf("\n After function call a[%d]:%d",i,arr[i]);
}
}