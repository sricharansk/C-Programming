#include <stdio.h>
int arms(int num)
{
     int temp,sum=0,r;
     for(temp=num;num!=0;num=num/10)
    {
         r=num % 10;
         sum=sum+(r*r*r);
    }
    if(sum==temp)
         printf("%d is an Armstrong number.",temp);
    else
         printf("%d is not an Armstrong number.",temp);

}
int main()
{
    int num,r,sum=0,temp;
    printf("Input  a number: ");
    scanf("%d",&num);
    arms(num);
}