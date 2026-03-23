/*Question: Write a loop program to print the two-digit even numbers, who’s sum of
digits are 6.
Answer: 24
42
60*/

#include<stdio.h>
int main ()
{
int x;
x=11;
loop: if(x<100)
{
    if((x/10 + x%10) == 6 && (x%2==0))
    {
    printf("%d\n",x);
    }
    x++;
goto loop;
}

}