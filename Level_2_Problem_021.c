/*Question: Write a program get number from user print the total number digits which are odd in the number.
Answer: Input : 12345678 - Output : 4 Input : 987531 - Output : 5*/
#include <stdio.h>

int main()
{
 int x,digit=0,count=0;
 printf("Enter a Number :\n");
 scanf("%d",&x);
 while(x >0)
 {
  digit= x%10;
  if(digit%2 !=0)
  {
    count = count + 1;
  }
  x = x/10;
 }
printf("Total No of ODD digits is : %d",count);
}