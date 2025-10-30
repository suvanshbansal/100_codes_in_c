//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a ,b , c;
    printf("enter quadratics coefficients a ,b ,c");
    scanf("%f %f %f", &a ,&b ,&c);
    float dis;
    dis = b*b -(4*a*c);
    float root1 ,root2 ;
    root1 = -b + sqrt(dis);
    root1 = root1/2*a ;
    root2 = -b - sqrt(dis);
    root2 = root2/2*a;
    if(dis>0)
    {
        printf("roots are real and distinct with roots %f and %f", root1 , root2);
    }
    else if(dis == 0)
    {
        printf("roots are real and same ie %f which is equall to second root - %f", root1 ,root2);
    }
    else
    printf("roots are imaginary");
    return 0;
}