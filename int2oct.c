#include<stdio.h>
int main()
{
    long decnum, quotient,rem,qd,rem2;
    int octn[1000],i=1,j=0;
    char hdn[1000];
    printf("Enter the integer number:");
    scanf("%ld",&decnum);
    quotient=decnum;
    quotient=qd;
    while(quotient!=0)
    {
        octn[i++]=quotient%8;
        quotient= quotient/8;
    }
    printf("The octal number for %d is",decnum);
    for(int j=i-1;j>0;j--)
    {
        printf("%o" ,octn[j]);
    }
    while(qd!=0)
    {
        rem2=qd%16;
        if(rem2<10)
            hdn[j++]=48+rem2;
        else
            hdn[j++] = 55 + rem2;
            qd = qd / 16;
        
    }
    printf("\nThe hexadecimal number for %d is",decnum);
    for (i = j; i >= 0; i--)
            printf("%c", hdn[i]);
    return 0;
}