// Q4: Write a program to calculate the area and circumference of a circle given its radius.


#include<stdio.h>

int main() {

    int r;
    int A;
    int C;

printf("enter radius: ");
scanf("%d", &r);

A= (float)(3.14)*(r)*(r);
C= (2)*(3.14)*(r);

printf("A= %d C= %d", A,C);

return 0;

}

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
