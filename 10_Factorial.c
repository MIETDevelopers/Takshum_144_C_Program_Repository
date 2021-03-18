//Author Name= Takshum Bhau
//Creation Date= 18-03-2021

#include<stdio.h>//Preprocessive directive to include standard library input output header file
int main(){		//main function bodystarts
	int num, fact=1, i;		//declaring variables named "num", "fact", and "i"
	scanf("%d",&num);		//read the user input
	printf("Enter a number = %d",num);		//print the output
	for (i=num;i>=1;i--){		//starting for loop
		fact = fact*i;
	}
	printf("\nFactorial of a number %d is = %d", num, fact);	//print the factorial of a number
	return 0;	//return statement
}//main function body ends
