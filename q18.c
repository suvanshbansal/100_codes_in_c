//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
/*90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include<stdio.h>
char grade(float);

int main()
{
    float marks;
    printf("enter your percentage");
    scanf("%f", &marks);
    char grades;
    grades =grade(marks);
    if(grades =='I')
    {
        printf("invalid input please enter value between 0 and 100");
    }
    else
    printf("%c",grades);
    return 0;
}
char grade(float percentage)
{
    char grade;
    if(percentage >100 && percentage<0)
    {
        grade ='I';
    }
    else if(percentage >= 90 && percentage <=100)
      {
        grade ='A';
      }
    else if(percentage >=80 && percentage<=89)
    {
        grade ='B';
    }
    else if(percentage >=70 && percentage <=79)
    {
        grade ='C';
    }
    else if(percentage >=60 && percentage <=69)
    {
        grade ='D';
    }
    else 
    grade ='F';
    return (grade);
}