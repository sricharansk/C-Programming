#include <stdio.h>
int main()
{
    int i=1,num,fact;
    printf("Enter the number to find factorial\n");\
    scanf("%d",&num);
    if(num==0)
    {
        printf("\n Factorial of 0 is 0");
    }
    else{
    while(i<=num)
    {
        fact=num*(num-1);
        num=num-1;
    }}
    printf("FACTORIAL OF %d=%d",num,fact);
    return 0;
}
