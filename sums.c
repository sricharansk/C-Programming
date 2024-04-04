#include<stdio.h>
int main()
{
    int a,sum,sub,mul,din,rem;
    a=10;
    b=5;
    sum=a+b;
    sub=a-b;
    mul=a*b;
    din=a/b;
    rem=a%b;
    printf("Sum of %d and %d is %d",a,b,sum);
    printf("Diff of %d and %d is %d",a,b,sub);
    printf("product of %d and %d is %d",a,b,mul);
    printf("QUotient of %d and %d is %d",a,b,din);
    printf("Remainder of %d and %d is %d",a,b,rem);
    return 0;
}