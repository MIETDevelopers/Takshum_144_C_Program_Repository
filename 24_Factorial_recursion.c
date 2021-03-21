//Author Name= Takshum Bhau
//Creation Date= 21-03-2021
//Purpose= A C Program to print factorial using recursion.
#include<stdio.h>//preprocessor directive to include standard input output function header file
	long int multiplyNumbers(int n);
	int main() {
    	int n;
    	printf("Enter a positive integer: ");
    	scanf("%d",&n);
    	printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    	return 0;
	}

	long int multiplyNumbers(int n) {
    	if (n>=1)
        	return n*multiplyNumbers(n-1);
    	else
        	return 1;
}
