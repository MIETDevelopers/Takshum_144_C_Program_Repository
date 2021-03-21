//Author Name= Takshum Bhau
//Creation Date= 19-03-2021
//Purpose= Arithmetic operations using addition,subtraction,multiplication and remainder operator
#include <stdio.h>//preprocessor directive to include standard input output function header file
int main(){//main function body starts

	int a=7,b=3,c;//variable declaration and value assignment
	
	c=a+b;//logic for adding two numbers
	printf("a+b= %d\n",c);//statement to print addition output
	c=a-b;//logic for subtracting two numbers
	printf("a-b= %d\n",c);//statement to print subtraction output
	c=a*b;//logic for multiplying two numbers
	printf("a*b= %d\n",c);//statement to print multiplication output
	c=a%b;//logic for remainder
	printf("a%b= %d\n",c);//statement to print remainder output
	
	return 0;//return statement
}//main function body ends
