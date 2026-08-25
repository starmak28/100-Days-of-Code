// Q11: Write a program to input an integer and check whether it is even or odd using if–else.


#include <stdio.h>

int main() {

int i;

printf("enter an integer: ");
scanf("%d", &i);

if(i%2==0)
printf("even");

else
printf("odd");

return 0;

}

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/
