/*Question: Write a program to get number from user, print whether that number’s first two digits 
(ten’s digits and one’s digit) is prime.
Answer: Input: 359 - Output: Prime
Input: 3577 - Output: Not Prime*/

#include<stdio.h>
int main ()
{
int x,n=1,last_two_digits,factors=0;
printf("Enter a   number: ");
scanf("%d",&x);
last_two_digits= (x%10 )+((x%100)/10)*10;
printf("%d",last_two_digits);
while( n <= last_two_digits)
{
    if(last_two_digits%n ==0)
    {
        factors = factors +1;
    }
    n++;
}
printf("factors : %d\n",factors);
if(factors <=2)
{
    printf("last two digits of %d is  a prime",x);
}
else 
{
    printf("last two digits of %d is not a  prime",x);
}

}