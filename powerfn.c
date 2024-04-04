#include<stdio.h>
int power(int base,int p)
{
    if(p!=0)
        return(base*power(base,p-1));
    else
        return 1;
}
int main()
{
    int base,p,result;
    printf("Enter base number: ");
    scanf("%d",&base);
    printf("Enter Power: ");
    scanf("%d",&p);
    result=power(base,p);
    printf("The value of %d^%d is %d",base,p,result);
    return 0;
}