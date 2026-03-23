/*Question: Write a program get number from user print the total number of single-digit prime numbers in the number.
Answer: Input: 163496481 - Output: 1 Input: 364925 - Output: 3*/
#include <stdio.h>

int main()
{
    int n, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;

        if(digit == 2 || digit == 3 || digit == 5 || digit == 7)
        {
            count++;
        }

        n = n / 10;
    }

    printf("Total number of single-digit prime numbers: %d", count);

    return 0;
}