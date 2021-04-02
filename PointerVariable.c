//Author Name= Takshum Bhau
//Creation Date= 27-03-2021
#include <stdio.h>// pre processor directive to include standard input output function header file
int main()
{
   //Variable declaration
   int num = 10;

   //Pointer declaration
   int *p;

   //Assigning address of num to the pointer p
   p = &num;

   printf("Address of variable num is: %p", p);
   return 0;//return statement
}
