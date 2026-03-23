/*Question: Write a program get number from user print the total number of single-digit perfect square numbers in the number.
Answer: Input: 123456789 - Output: 3 Input: 987531 - Output: 2*/
#include <stdio.h>

int main()
{
    int x, d1, count = 0;

    printf("Enter a number:\n");
    scanf("%d", &x);

    while (x > 0)   // ensures at least 2 digits
    {
        d1 = x % 10;          // last digit
        if ((d1 == 1)|| (d1 == 4 ) ||( d1 ==9))  // condition to check single digit perfect squares
        {
            count++;
        }

        x = x / 10;  // shift digits
    }

    printf("Total number of single-digit perfect square numbers : %d", count);

    return 0;
}