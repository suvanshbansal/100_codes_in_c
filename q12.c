#include<stdio.h>
//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
int main()
{
    int num;
    printf("enter a number \n");
    scanf("%d", &num);
    if(num > 0){
    printf("entered number is positive \n");
    }
    else if(num < 0)
    {
        printf("entered number is negative \n");
    }
    else
    printf("entered number is 0 \n");

    return 0;
}