#include<stdio.h>
int main()
{
    int a,b,c,sum;
    float avg;
    printf("Enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    printf("\n Sum of three numbers= %d",sum);
    avg=sum/3;
    printf("\n Average of three numbers %f",avg);
    return 0;
}