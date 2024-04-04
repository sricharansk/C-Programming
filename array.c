#include<stdio.h>
int main()
{
   int disp[4][3] = { {[0]=0,10, 20}, 30, 0, 50, {60, 70},{90,12}};
   int i, j;
    printf("2D ARRAY : \n");
   for(i=0; i<4; i++) 
   {
      for(j=0;j<3;j++) 
      {
         printf("%d ", disp[i][j]);
         if(j==2)
        {
            printf("\n");
        }
       }
   }
}