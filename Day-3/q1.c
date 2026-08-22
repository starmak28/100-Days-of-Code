// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>

int main(){

int C;
int F;

printf("enter temperature in celsius:");
scanf("%d", &C);

F= (C*1.8)+32;

printf("F= %d", F);

return 0;

}




/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
