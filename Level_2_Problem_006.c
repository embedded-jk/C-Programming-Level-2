/*Question: Write a loop program to print the two-digit odd numbers, below 20.
Answer: 11
13
15
17
19*/

#include<stdio.h>
int main ()
{
int x;
x=11;
loop: if(x<20)
{
    printf("%d\n",x);
    x=x+2;
goto loop;
}

}