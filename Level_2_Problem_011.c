/*Question: Write a program to get a number from user print the total number of
digits in that number
Answer: Input : 123456 - Output – 6
Input : 76895439- Output – 8
Input : 675 – Output - 3*/

#include<stdio.h>
int main ()
{
int x,count=0;
printf("Enter a Number : ");
scanf("%d",&x);
while (x>0)
{
    x = x / 10;
    count++;
}
printf("%d\n",count);
}