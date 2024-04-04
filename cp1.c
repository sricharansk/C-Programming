#include<stdio.h>
int main(){
    float p,r,si,t;
    printf("Enter Principal Amount:");
    scanf("%f",&p);
    printf("Enter rate of interest:");
    scanf("%f",&r);
    printf("Enter Time:");
    scanf("%f",&t);
    si=p*r*t/(float)100;
    printf("Simple Interest: %f",si);
}