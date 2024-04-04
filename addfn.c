#include<stdio.h>
int sum(int a,int b)
{
    int add;
    printf("The sum of two numbers %d and %d is %d",a,b,a+b);
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    sum(a,b);
}