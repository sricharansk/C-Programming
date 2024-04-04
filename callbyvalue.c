#include<stdio.h>
int chaitanya(int*a,int*b)
{
    printf("a=%d \nb=%d",(*a)+=100, (*b)+=100);
}
int main(){
    int a=10,b=20;
    chaitanya(&a,&b);
    printf("\na=%d \nb=%d",a,b);
    return 0;
}