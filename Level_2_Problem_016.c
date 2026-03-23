/*Question: Write a program get number from user print whether that number is prime or not.
Answer: Input : 31 - Output : Prime Input : 27 - Output : Not Prime.*/

#include<stdio.h>
int main ()
{
int x,n=1,factors=0;
printf("Enter the number: ");
scanf("%d",&x);
while( n < x)
{
    if(x%n ==0)
    {
        factors = factors +1;
    }
    n++;
}

if (factors >=3)
{
    printf("The Number %d is Not a Prime",x);
}
else if(x==1)
{
    printf("The Number %d is neither a Prime nor unprime",x);
}
else 
{
      printf("The Number %d is Prime",x);
}
}