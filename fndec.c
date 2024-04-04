#include<stdio.h>
int election(int age){
    if(age<18){printf("NOT ELligible");}
    else{printf("ELligible");}
}
int main(){
    int age=50;
    election(age);
}
