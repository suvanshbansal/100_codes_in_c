#include<stdio.h>
//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

int main()
{
    int length;
    int breadth;
    printf("enter length of rectangle \n");
    scanf("%d", &length);
    printf("enter breadth \n");
    scanf("%d", &breadth);

int area;
int perimeter;
area = length*breadth;
perimeter = 2*length + 2*breadth;
printf("area is %d \n ", area);
printf("perimeter is %d \n", perimeter);
return 0;

}