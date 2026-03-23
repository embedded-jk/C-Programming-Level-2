/*Question: Write a loop program to print the two-digit odd numbers, who’s sum of
digits are 7.
Answer: 25
43
61*/

#include<stdio.h>
int main ()
{
int x;
x=11;
loop: if(x<100)
{
    if((x/10 + x%10) == 7 && (x%2==1))
    {
    printf("%d\n",x);
    }
    x++;
goto loop;
}

}