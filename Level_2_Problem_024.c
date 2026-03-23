/*Question: Write a program get number from user print the total number of two-digit perfect square numbers in the number.
Answer: Input: 163496481 - Output: 4 Input: 364925 - Output: 4*/
#include <stdio.h>

int main()
{
    int x, d1, d2, count = 0;

    printf("Enter a number:\n");
    scanf("%d", &x);

    while (x >= 10)   // ensures valid 2-digit numbers
    {
        d1 = x % 10;           
        d2 = (x / 10) % 10;    

        int num = d2 * 10 + d1;

        if (num == 16 || num == 25 || num == 36 ||
            num == 49 || num == 64 || num == 81)
        {
            count++;
        }

        x = x / 10;  
    }

    printf("Total number of two-digit perfect square numbers: %d", count);

    return 0;
}