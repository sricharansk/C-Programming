#include<stdio.h>
int main()
{
    int billamt,amtgiven;
    int Q,R;
    printf("ENTER GIVEN AMT AND BILL");
    scanf("%d",&amtgiven);
    scanf("%d",&billamt);
    Q=amtgiven/billamt;
    R=amtgiven%billamt;
    printf("QUotient %d",Q);
    printf("Remainder %d",R);
    return 0;
}