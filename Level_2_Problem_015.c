/*Question: Write a program to get a number from user and if the last digit of the number is even 
print the same number. If the last digit of the number is odd then subtract 1 from the last digit and print 
the number. (Note: Last digit -MSB)
Answer: Input : 123456 - Output – 123456
Input : 96895439- Output – 76895439
Input : 675 – Output - 575*/

#include<stdio.h>
int main ()
{
int x;
printf("Enter the number: ");
scanf("%d",&x);
(x%2==0) ? printf("%d",x):printf("%d",x-1);
}