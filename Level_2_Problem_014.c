/*Question: Write a program to get a number from user and interchange the first and last digits and print the result.
Answer: Input : 123456 - Output – 623451
Input : 76895439- Output – 96895437
Input : 675 – Output - 576*/

#include<stdio.h>
int main ()
{
int x,n,first, last , middle, pow = 1;
printf("Enter the number: ");
scanf("%d",&x);
n =x;
last = n%10;
while (n >= 10)
{
     n = n/10;
     pow = pow*10;
}
first = n;
middle = x % pow;
middle = middle/10;
int result = last*pow + middle*10 +first;
printf("%d",result);
}