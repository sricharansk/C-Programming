#include  <stdio.h>
int main()
{
    int i, num;
    float sum = 0.0, avg;
    printf ("Enter the value of N:");
    scanf("%d", &num);
    int array[num];
    printf("Enter %d numbers \n", num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < num; i++)
    {
        sum+=array[i];
    }
    avg = sum / num;
    printf("\n Sum of all numbers =  %.2f\n", sum);
    printf("\n Average of all input numbers =  %.2f\n", avg);
}