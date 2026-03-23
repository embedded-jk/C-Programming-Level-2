/*Question: Write a program print total number of single digit Prime numbers
Answer: 4*/
#include <stdio.h>

int main()
{
    int i, j, count = 0, isPrime;

    for(i = 0; i <= 9; i++)
    {
        if(i <= 1)
            continue;

        isPrime = 1;

        for(j = 2; j * j <= i; j++)
        {
            if(i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime)
            count++;
    }

    printf("Single digit prime count: %d\n", count);

    return 0;
}