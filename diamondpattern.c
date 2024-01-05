//title of program
//program to make a diamond pattern by using numbers
//header file
#include <stdio.h>
//main function
int main()
{
//variable declaration
    int rows;
//input from user
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    //assignment of values
    int row=1,i,j;
//print upper part by using nested loop statement
for(i=rows/2; i>0; i--){    
    for(j=1; j<=i; j++){
        //print space
      printf(" ");
}
// using for loop statement
for(j=1; j<=row; j++){
      printf("%d",row);
      printf(" ");
}
//move to next line
printf("\n");
row++;
}
//using nested loop statement
for(i=0; i<=rows/2; i++){
  for(j=1; j<=i; j++){
    //print space
      printf(" ");
}
//print lower part by using for loop statement
for(j=row; j>=1; j--){  
      printf("%d",row);
      printf(" ");
}
//move to next line
printf("\n");
//decrement statement
row--;
        }
//return statement
    return 0;
}