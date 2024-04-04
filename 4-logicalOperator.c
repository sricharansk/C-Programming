#include <stdio.h>
 int main()
{
    int a = 10, b = 4, resp;
 
    printf("a is %d and b is %d\n", a, b);
 
    resp = a + b; 
    printf("a+b is %d\n", resp);
 
    resp = a - b; 
    printf("a-b is %d\n", resp);
 
    resp = a * b; 
    printf("a*b is %d\n", resp);
 
    resp = a / b; 
    printf("a/b is %d\n", resp);
 
    resp = a % b; 
    printf("a%%b is %d\n\n", resp);

    return 0;
}