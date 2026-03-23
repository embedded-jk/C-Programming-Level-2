/*Write a program to print biggest 4-digit number which is divisible by 7 and 9.*/
#include <stdio.h>

int main()
{
    int n=1111, number;
while(n<9999)
{
    if(n%7==0 && n%9 ==0)
    {
     number = n;
    }
    n++;
}
  printf("Biggest 4-digit number is : %d",number);
  
}