#include<stdio.h>
//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/
int main()
{
    int num;
    printf("enter a number \n");
    scanf("%d", &num);
    num = num % 2;
    if(num == 0)
    {
        printf("even");
    }
    else 
    printf("odd");

    return 0;
}