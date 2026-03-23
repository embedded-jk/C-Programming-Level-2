/*Question: Write a loop program to print the sum of two-digit odd numbers, whose
ten’s digit is 7.
Answer: 375*/

#include<stdio.h>
int main ()
{
int x,sum;
x=11;
loop: if(x<100)
{
    if((x/10) == 7 && (x%2==1))
    {
        sum = sum+x;
    }
    x++;
goto loop;
}
 printf("%d\n",sum);
}