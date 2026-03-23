/*Write a program to get two numbers from user and print the LCM of those numbers.*/

#include <stdio.h>

int main()
{
    int a, b, i, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find GCD
    for(i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    // Calculate LCM
    lcm = (a * b) / gcd;

    printf("LCM = %d", lcm);

    return 0;
}