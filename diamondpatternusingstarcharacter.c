//title of program
//program to make a diamond pattern by using stars as a character
//header file
#include<stdio.h>
//main function heading
int main()
{
 //variable declaration
    int i, j, rows;
    int stars, spaces;
   //input from user
    printf("Enter rows to print : ");
    scanf("%d", &rows);
    //assignment of values
    stars = 1;
    spaces = rows - 1;
    //using nested loop statement
    for(i=1; i<rows*2; i++)
    {
        //print stars
        for(j=1; j<=spaces; j++)
            printf(" ");
        //print stars
        for(j=1; j<stars*2; j++)
            printf("*");
    //mobe to next line
        printf("\n");
    //if else statement
        if(i<rows)
        {
            spaces--;
            stars++;
        }
        else
        {
            spaces++;
            stars--;
        }
    }
    //return statement
    return 0;
}