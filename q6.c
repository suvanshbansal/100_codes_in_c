#include<stdio.h>
//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
int main()
{
    int a;
    int b;
    int temp;
    printf("enter numbers");
    scanf("%d %d", &a ,&b) ;
    

    temp = a;
    a = b;
    b = temp;
    printf("swaped %d ,%d", a ,b);
    return 0;

}
