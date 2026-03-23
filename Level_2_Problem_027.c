/*Write a program to print the total count of numbers which are less than 100000 and whose sum of digits is 14.*/
#include <stdio.h>

int main()
{
    int i, n, digit, sum, count = 0;

    for(i = 1; i < 100000; i++)
    {
        n = i;
        sum = 0;

        while(n > 0)
        {
            digit = n % 10;
            sum = sum + digit;
            n = n / 10;
        }

        if(sum == 14)
        {
            count++;
        }
    }

    printf("Total count = %d", count);

    return 0;
}