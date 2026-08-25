// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>

int main(){

int t;

printf("enter time in seconds: ");
scanf("%d", &t);

int h= t/3600;
t= t%3600;
int m= t/60;
int s= t%60;

printf("h= %d m= %d s= %d", h, m, s);

return 0;

}

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
