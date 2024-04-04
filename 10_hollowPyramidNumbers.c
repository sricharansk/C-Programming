#include <stdio.h>

void pattern(int n){
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
        {
            printf(" "); 
        }
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || i == n)
            {
                if(j>10){
                    printf("%d",j);
                }else{
                    printf(" %d",j);
                }
            }
            else
            {
                printf(" "); 
            }
        }
        for (j = 1; j < i; j++)
        {
            if (j == i - 1 && j < n - 1)
            {
                printf("%d", j+1);
            }
            else
            {
                printf(" "); 
            
            }
        }
        printf("\n");
    }
}

int main()
{
    
    pattern(5);

    return 0;
}