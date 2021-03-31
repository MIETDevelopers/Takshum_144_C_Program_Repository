//Author Name= Takshum Bhau
// Creation date=21-03-2021
// Purpose=To Check whether the number is Armstrong or not  
#include <stdio.h>  //preprocessor directive to include standard input output function header file
int main()
 {     //main function body starts
    int num, ON, re, result = 0; //Declaration of Variable
    printf("Enter a three-digit integer: "); // Taking input 
    scanf("%d", &num); // processing input 
    ON = num; // logic 

    while (ON != 0) //loop started
	{          //loop body
       // remainder contains the last digit
        re = ON % 10; // Logic 
        
       result += re * re * re; // Logic 
        
       // removing last digit from the orignal number
       ON /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num); // Print  this Statement if true
    else
        printf("%d is not an Armstrong number.", num); // Print this Statement if false 

    return 0;//return statement
} //main function body ends
