//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include<stdio.h>
int main()
{
    float side1, side2 ,side3 ;
    printf("enter length's sides of triangle \n");
    scanf("%f %f %f", &side1 ,&side2 ,&side3);
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
    {
    if(side1==side2 && side2==side3)
    {
        printf("equilateral");
    }
    else if(side1==side2 || side1==side3 || side2==side3)
    {
        printf("isosclees");
    }
    else 
    printf("scalene");
    }
    else
    printf("invalid triangle");

    return 0;
}