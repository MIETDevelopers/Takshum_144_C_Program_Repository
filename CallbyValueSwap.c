//Author Name= Takshum Bhau
//Creation Date= 23-03-2021
    //Purpose= Call by Value Example - Swapping 2 numbers using Call by Value
#include <stdio.h>//preprocessor directive to include standard input output function header file
void swap(int , int ); //  variable to pass by reference (which is the the address of an integer variable)
 
int main() //main function body starts
{
   int x, y;// Variable Declration 
 
   printf("Enter the value of x and y\n"); // Input from user
   scanf("%d%d",&x,&y);
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y); // Before Swapping 
 
   swap(x, y); 
 
   printf("After Swapping\nx = %d\ny = %d\n", y, x); // After Swapping 
 
   return 0;
}
 
void swap(int a, int b) // variable to pass by reference
{
   int temp; // Variable Declaration 
 
   temp = b;
   b = a;
   a = temp;
    printf("Values of a and b is %d  %d\n",a,b); // Printing Statement 
}
