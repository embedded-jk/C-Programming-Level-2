/*Question: Write a program to get a 4-digit number from user, print whether that number’s middle two digits (hundred’s digit and ten’s digit) is prime.
Answer: Input: 6359 - Output: Not Prime
Input: 3517 - Output: Prime*/

#include<stdio.h>
int main ()
{
int x,n=1,middle_two_digits,factors=0;
printf("Enter a four digit  number: ");
scanf("%d",&x);
middle_two_digits= ((x/10)%10)+(((x/100)%10)*10);
printf("%d\n",middle_two_digits);
while(n<=middle_two_digits)
{
    if(middle_two_digits%n ==0)
    {
        factors = factors+1;
    }
    n++;
}
printf("factors : %d\n",factors);
if(factors <=2)
{
    printf("Middle two digits of %d is  a prime",x);
}
else 
{
    printf("Middle two digits of %d is not a  prime",x);
}

}