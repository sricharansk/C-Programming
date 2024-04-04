#include <stdio.h>
int main()
{
    int n, sum=0, dig1, dig2;
    printf("Enter number to find sum of first and last digit = ");
    scanf("%d", &n);
    dig2 = n % 10;
    while(n >= 10)
    {
        n = n / 10;
    }
    dig1 = n;
    sum = dig1 + dig2;
    printf("Sum of first and last digit = %d", sum);
    return 0;
}