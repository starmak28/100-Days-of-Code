// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main(){

int i;

printf("enter an integer: ");
scanf("%d", &i);

if(i>0)
printf("positive");

else if(i<0)
printf("negetive");

else
printf("zero");

return 0;

}

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
