/*Write a program to get three numbers from user and print the LCM of those numbers.*/

#include <stdio.h>

int main()
{
    int a, b, c, i, gcd, lcm_ab, lcm;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Step 1: Find LCM of a and b
    for(i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    lcm_ab = (a * b) / gcd;

    // Step 2: Find LCM of lcm_ab and c
    for(i = 1; i <= lcm_ab && i <= c; i++)
    {
        if(lcm_ab % i == 0 && c % i == 0)
        {
            gcd = i;
        }
    }
    lcm = (lcm_ab * c) / gcd;

    printf("LCM = %d", lcm);

    return 0;
}