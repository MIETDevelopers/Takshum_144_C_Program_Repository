//Author Name= Takshum Bhau
//Creation Date= 21-03-2021
//Purpose= A C Program to print Fibonacci series using recursion.	 			
#include<stdio.h>  //preprocessor directive to include standard input output function header file  
int main(){  //main function body starts 
	int n1=0,n2=1,n3,i,number;    
	printf("Enter the number of elements: ");    
	scanf("%d",&number);    
	printf(" %d %d",n1,n2);//Printing 0 and 1.   
	for(i=2;i<number;++i)//Loop starts from 2 because 0 and 1 are already printed.   
		{	//This will give output.
			n3=n1+n2;    
  			printf(" %d",n3);    
  			n1=n2;    
  			n2=n3;    
 		}  
	return 0; //return statement 
}//main function body ends
