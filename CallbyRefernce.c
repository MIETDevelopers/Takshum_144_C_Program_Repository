//Author Name= Takshum Bhau
//Creation Date= 22-03-2021
//Purpose= A C Program to swap two numbers using call by reference.             
#include <stdio.h>//preprocessor directive to include standard input output function header file
 
void swap(int*, int*);
 
int main()
{   //main function body starts
   int x, y;
 
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
   swap(&x, &y); 
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
   return 0;//return statement
}
 
void swap(int *a, int *b)
{
   int temp;
   // Here swapping occurs.
   temp = *b;
   *b = *a;
   *a = temp;
}
