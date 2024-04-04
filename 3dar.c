#include<stdio.h>
int main(){
    int arr1[3][4][1]={{1},{2},{3},{4},{5},{6},{7},{8},{9},10,11,12};
    int i,j,k;
    for(i=0;i<3;i++){printf("\n");
        for(j=0;j<4;j++){printf("\t\n");
            for(k=0;k<1;k++){
                printf("\tarr[%d][%d][%d]= %d\t",i,j,k,arr1[i][j][k]);
            }
        }
    }

}