/*Question: Write a program to get a number from user and print the sum of all digits.
Answer: Input: 123456 - Output – 21
Input: 76895439 - Output – 51
Input: 675 – Output - 18*/

#include<stdio.h>
int main ()
{
int x,y,sum = 0;
printf("Enter a Number : ");
scanf("%d",&x);
while (x>0)
{ 
    y = x%10 ;
    x = x / 10;
    sum = sum + y;
}
printf("%d\n",sum);
}