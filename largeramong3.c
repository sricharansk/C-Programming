#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter three numbers \n ");
    scanf("%f %f %f",&a,&b,&c);
    printf("\n Entered numbers are: %f %f %f ",a,b,c);
    if(a>b && a>c)
    {
        printf("\n %f is greater",a);
    }
    else if(b>a && b>c)
    {
        printf("\n %f is greater",b);
    }
    else
    {
        printf("\n %f is greater",c);
    }
    return 0;
}