/*Question: Write a loop program to print the sum of two-digit numbers whose
one’s digit is 5.
Answer: 495*/

#include<stdio.h>
int main ()
{
int x,sum;
x=11;
loop: if(x<100)
{
    if((x%10) == 5)
    {
        sum = sum+x;
    }
    x++;
goto loop;
}
 printf("%d\n",sum);
}