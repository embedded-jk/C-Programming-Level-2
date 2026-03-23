/*Question: Write a program get number from user print the total number of two-digit odd numbers in the number.
Answer: Input: 12345678 - Output: 3 Input: 987531 - Output: 4*/
#include <stdio.h>

int main()
{
    int x, d1, d2, count = 0;

    printf("Enter a number:\n");
    scanf("%d", &x);

    while (x >= 10)   // ensures at least 2 digits
    {
        d1 = x % 10;          // last digit
        d2 = (x / 10) % 10;   // second last digit

        int num = d2 * 10 + d1;

        if (num % 2 != 0)   // check odd
        {
            count++;
        }

        x = x / 10;  // shift digits
    }

    printf("Total number of two-digit odd numbers: %d", count);

    return 0;
}