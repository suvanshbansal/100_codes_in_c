#include<stdio.h>
//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
int main()
{
    int sec;
    int h;
    int min;
    printf("enter time in seconds \n");
    scanf("%d", &sec);
     sec = sec % 3600;
      sec = sec % 3600;
 h = sec % 3600;
 h = h %60;
 sec = sec % 3600;
  min = (sec % 3600);
  
  min = min/60;
     sec = sec % 3600;
sec = sec/60;
printf(" time is %d:%d:%d \n", h ,min,sec);
return 0;


}