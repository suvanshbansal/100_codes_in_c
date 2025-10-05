#include<stdio.h>
// Q4: Write a program to calculate the area and circumference of a circle given its radius.
int main()
{
    float r;
    printf("enter radius of circle \n");
    scanf("%f", &r);
    printf("area %f \n", 3.14*r*r);
    printf("perimeter %f  \n", 2*3.14*r);
    return 0;

}
