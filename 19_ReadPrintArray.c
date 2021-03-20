//Author Name= Takshum Bhau
//Creation Date= 20-03-2021
//Purpose= A C Program to read and print elements in two dimensional array.
#include<stdio.h>//preprocessor directive to include standard input output function header file
int main(){ //main function body starts
   // 2D array declaration//
   int disp[2][3];
   //Counter variables for the loop//
   int i, j;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;//return statement
} //main function body ends
