#include<stdio.h>
int main()
{
    int n,orgn,rem,revn=0;
    printf("\n Enter an integer");
    scanf("%d",&n);
    orgn=n;
    while(n!=0)
    {
        rem=n%10;
        revn=revn*10+rem;
        n/=10;
    }
    if (orgn==revn)
    {
        printf("\n THE NUMBER ENTERED IS PALINDROME");
    }
    else
    {
        printf("\n THE NUMBERS ARE NOT PALINDROME");
    }
    return 0;
}