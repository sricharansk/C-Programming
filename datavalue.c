#include<stdio.h>
int main(){
    int a=10;
    char b='h';
    double c=10.00;
    float d=3.14;
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(c));
    printf("%d\n",sizeof(d));
    int i=0;
    for(i=0;i<=10;i++){printf("%d",i);}
    if(a==0){printf("\nSRM");}
    else{printf("\nRamapuram ");}
    return 0;}