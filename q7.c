#include<stdio.h>
//Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
int main()
{
    int a;
    int b;
    printf("enter number ");
    scanf("%d %d", &a ,&b) ;


    printf(" swapped \n");
    printf("%d %d", b , a);

    return 0;

}
