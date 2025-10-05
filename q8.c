#include<stdio.h>
//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
int main()
{
    int num;
    int sum;
    printf("enter number \n");
    scanf("%d", &num);
    sum = num*(num + 1);
    sum = sum/2;
    printf("sum of first %d natural numbers is %d", num , sum);
    return 0;

}