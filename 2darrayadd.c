#include<stdio.h>
int main(){
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int pdt[3][3],i,j,add=0;
    printf("\nPRODUCT OF MATRIX:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            pdt[i][j]=arr1[i][j]*arr2[i][j];
        }
    }
    for(i=0;i<3;i++){printf("\n");
        for(j=0;j<3;j++){printf("%d \t",pdt[i][j]);}}
}