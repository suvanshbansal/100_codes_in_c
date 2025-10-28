#include<stdio.h>
//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include<stdio.h>
int main()
{
    char cha;
    printf("enter a letter capital or small ");
    scanf("%c", &cha);
    if(cha >= 97 & cha <= 122)
    {
        printf("entered alphabet is in small case");
    }
    else if(cha >=65 & cha <=90)
    {
        printf("entered is in capital case");
    }
    else
    printf("not an alphabet");
    return 0;

}