#include<stdio.h>
int main()
{
    int cp,sp,diff;
    printf("Enter Cost Price:");
    scanf("%d",&cp);
    printf("Enter Selling Price:");
    scanf("%d",&sp);
    if(sp>cp)
    {
        diff=sp-cp;
        printf("Your are selling products with Rs.%d as profit",diff);
    }
    else if (cp>sp)
    { 
        diff=cp-sp;
        printf("You are selling your products with Rs.%d as loss",diff);
    }
    else
    {
        printf("Your are selling your product by the cost price");
    }
    return 0;
}