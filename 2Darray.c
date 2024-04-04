#include<stdio.h>
#define N 3
#define M 3 
int main(){
    int arr[N][M],i,j,sum=0;
    printf("ENTER ARRAY ELEMENTS: ");
    for(i=0;i<N;i++){ //row
        for(j=0;j<M;j++){
            printf("arr[%d][%d]= ",i,j);
            scanf("\n%d",&arr[i][j]);
        }
    }
    printf("ARRAY ELEMENTS ARE: ");
    for(i=0;i<N;i++){ printf("\n");
        for(j=0;j<M;j++){
            printf("%d \t",arr[i][j]);
            sum=sum+arr[i][j];
        }
    }
    printf("\n SUM =%d",sum);
}