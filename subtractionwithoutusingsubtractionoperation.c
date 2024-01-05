//title of program
//program to perform addition without using subtraction operator
//header file
#include<stdio.h>
//main function heading
int main() {
//declaration of variables
   int num1, num2, i;
   //input statement from user for 1st no.
    printf("Enter first number: ");
    scanf("%d",&num1);
    //input statement from user for 2nd no.
    printf("Enter second number: ");
    scanf("%d",&num2);
    //for loop statement for performing subtraction
    for(i=1;i<=num2;i++){
    //increment statement for performing subtraction
        num1--;
    }
    //output statement
    printf("sub= %d", num1);
}