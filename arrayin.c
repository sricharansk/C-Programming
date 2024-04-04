#include<stdio.h>
#define N 5  // macro declaration
int main(){
    int arr[N],i;
    printf("Enter array values: \n");
    for(i=0;i<N;i++){
        printf("arr[%d]= ",i);
        scanf("\n%d",&arr[i]);
    }
    printf("Entered Array Values are: \n");
    for(i=0;i<N;i++){
        printf("%d\n",arr[i]);
    }  
    printf("Printing in Reverse Order\n");
    for(i=;i>=0;i--){
        printf("[%d ]",arr[i]);
    }
    return 0;
}