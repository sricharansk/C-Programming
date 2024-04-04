#include<stdio.h>
int main(){
    int x=10,y=20;
    printf("%d %d ",x++,y++);
    //Automatically increments the value of x and y by 1..
    printf("\n%d %d",x,y);
    //Decrement of x and y
    printf("\n%d %d",x--,y--);
    
    printf("\n%d %d",--x,--y);
    return 0;
}