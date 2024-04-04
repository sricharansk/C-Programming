#include<stdio.h>
void election(); //function decleration
int main(){
    int age=50;
    election(age);
    /*if(ans==0){printf("NOT ELligible");}
    else{printf("ELligible");}*/
}
void election(int age){
    if(age>=18){printf("ELligible");}
    else{printf("NOT ELligible");}
}