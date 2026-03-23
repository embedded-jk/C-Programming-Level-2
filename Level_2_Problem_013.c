/*Question: Write a program to get a number from user and print the reverse of that number
Answer: Input : 123456 - Output – 654321
Input : 76895439- Output – 93459867
Input : 675 – Output - 576*/

#include<stdio.h>
int main ()
{
int x,y,reverse= 0;
printf("Enter a Number : ");
scanf("%d",&x);
while (x>0)
{ 
    y = x%10 ;
    reverse = reverse*10+y;
    x = x / 10;
 }
printf("%d\n",reverse);
return 0;
}