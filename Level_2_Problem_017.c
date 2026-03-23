/*Question: Write a program to get a number from user, print whether that number is prime,
 and sum of digit is equal to 14.
Answer: Input: 59 - Output: Prime & Sum of Digits is 14 
Input: 77 - Output: Not Prime but sum of digits is 14 
Input: 13 - Output: Prime, but sum of Digits is not 14*/

#include<stdio.h>
int main ()
{
int x,n=1,factors=0, sum;
printf("Enter a 2-digit  number: ");
scanf("%d",&x);
while( n < x)
{
    if(x%n ==0)
    {
        factors = factors +1;
    }
    n++;
}
sum = x %10 + x/10;
if (factors >=3 && sum==14)
{
    printf("The Number %d is Not a Prime but Sum of digits is 14",x);
}
else if(x==1)
{
    printf("The Number %d is neither a Prime nor unprime",x);
}
else if(factors<=2 && sum == 14)
{
      printf("The Number %d is Prime and Sum of digits is 14",x);
}
else if (factors <=2 && sum!=14)
{
    printf("The Number %d is a Prime but Sum of digits is not 14",x);
}

}