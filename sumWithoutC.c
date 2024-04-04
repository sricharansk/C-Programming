#include<stdio.h>
int main() 
{
    int a;
    double b; 
    float c;
    printf("\n Enter three numbers");
    scanf("%d %lf %e",&a,&b,&c);
    printf("Three different data types are %d %lf %e \n ",a,b,c);
    float sum;  
    sum= a- (-b) -(-c);
    printf("\n Sum= %f ",sum);
}