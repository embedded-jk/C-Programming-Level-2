/*Question: Write a loop program to print sum of 1 to 5.
Answer: 15*/

#include<stdio.h>
int main ()
{
int x,sum;
x=1;
loop: if(x<6)
{
    sum = sum+x;
x++;
goto loop;
}
printf("%d\n",sum);
}