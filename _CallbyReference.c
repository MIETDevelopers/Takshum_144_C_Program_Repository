//Author Name= Takshum Bhau
//Creation Date= 25-03-2021
//Purpose= To swap two numbers using call by reference.             

#include <stdio.h>      //Pre-processor directive to include standard input and output functions header file
 void swap(int*, int*);
 int main(){// main function body starts
   int x, y;
   //Printf and scanf function calling
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
      swap(&x, &y); 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
   return 0;
}
 
void swap(int *a, int *b)
{
   int temp;
   // Here swapping occurs.
   temp = *b;
   *b = *a;
   *a = temp;   
}
