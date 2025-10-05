#include<stdio.h>
//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
int main()
{
    float c;
    float f;
    printf("enter the temperature in celcius \n");
    scanf("%f", &c);
    f = (c*9/5) + 32;
    printf("temperature in fahrenheit is %f", f);
return 0;
}