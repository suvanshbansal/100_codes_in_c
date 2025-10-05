#include<stdio.h>
//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
int main()
{
    float p;
    float r;
    float t;
    float si;
    float ci;
    float ta;
    // ta total amount
    // ci compounded amount(interest)

    printf("enter principal amount \n");
    scanf("%f", &p);

    printf("enter rate \n");
    scanf("%f", &r);

    printf("enter time period \n");
    scanf("%f", &t);


    si = p*r*t ;
    si = si/100;
    printf("simple interest is %f persent \n", si);
    printf("final amount is %f \n", si + p);

    ta = p* pow((1.0 + r / 100.0), t);
    printf("total amount including principal and compunded is %f \n", ta);
    ci = ta - p;
    printf("only the compunded amount is %f \n", ci);
    return 0;
}