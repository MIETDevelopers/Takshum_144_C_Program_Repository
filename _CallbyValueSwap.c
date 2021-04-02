//Author Name= Takshum Bhau
//Creation Date= 25-03-2021
//Purpose= Swap two numbers using call by value. 
        
#include <stdio.h> //Pre-processor directive to include standard input and output functions header file
  
int main() {        //main function body starts
    int x, y; 
    printf("Enter Value of x "); 
    scanf("%d", &x); 
    printf("\nEnter Value of y "); 
    scanf("%d", &y); 
    
    //Here swapping of number occurs.
    int temp = x; 
    x = y; 
    y = temp; 
  
    printf("\nAfter Swapping: x = %d, y = %d", x, y); 
    return 0;   //return function
} //main function body ends
