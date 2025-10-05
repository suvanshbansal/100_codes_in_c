#include<stdio.h>
//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
int main()
{
    int a;
    int b;
    printf("enter a number \n");
    scanf("%d", &a);
    printf("enter a number \n");
    scanf("%d", &b);
    printf("sum %d \n", a+b);
    printf("difference %d \n", a-b);
    printf("product %d \n", a*b);
    printf("quotiont %d \n", a/b);
    return 0;
    
}