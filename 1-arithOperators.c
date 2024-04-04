#include<stdio.h>
int main()
{
 int a, b;
 printf(" Enter any two numbers : ");
 scanf("%d %d", &a, &b);
 int add, sub, multi, div, mod;
 add = a + b; 
 sub = a - b; 
 multi = a * b; 
 div = a / b; 
 mod = a % b;
 printf("\n Sum of two numbers a, b is : %d",add);
 printf("\n Difference of two numbers a, b is : %d",sub);
 printf("\n Product of two numbers a, b is : %d",multi);
 printf("\n Division of two numbers a, b is : %d",div);
 printf("\n Remainder of two numbers a, b is : %d",mod);

}