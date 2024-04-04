#include <stdio.h>

int main()
{
    float fh,cl,f,c;
    char inp[100];
    printf("Select the Unit:  Celcius or Farenheit");
    scanf("%s",inp);
    int value = strcmp(inp,"C");
    if(value==0)
    {
        printf("\n Enter the temperature");
        scanf("%f",&cl);
        fh=((cl*1.8)+32);
        printf("\n The temperature in Farenheit is %f",fh);
    }else{
        printf("heloo");
    }
    if(inp=="Farenheit")
    {
        printf("\n Enter the temperature");
        scanf("%f",&f);
        c=(((f-32)*5)/9);
        printf("\n The temperature in Celcius is %f",c);
    }
} 