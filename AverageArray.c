#include <stdio.h>
int main() {
    int n,sum=0,average;
    printf("\n ENTER NO OF ROWS:");
    scanf("%d",&n);
    int values[n];
    printf("\nENTER ELEMENTS:",&n);
    for(int i=0; i<n; ++i)
     {
          scanf("%d", &values[i]);
          sum += values[i];
     }
     average = sum/n;
     for(int i=0;i<n;++i)
     {
         if(values[i]==average){
        printf("%d",average);
        }
     }
  return 0;
}