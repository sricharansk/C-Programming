#include<stdio.h>
int main()
{
    int n,t1=0,t2=1,i=1;
    int next=t1+t2;
    printf("\n Enter the number of terms:");
    scanf("%d",&n);
    printf("FABINOCCI SERIES: \n %d \t %d \t",t1,t2);
    for (i=1;i<=n;i++)
    {
       printf("%d \t",next);
       t1=t2;
       t2=next;
       next=t1+t2;
    }
    return 0;
}