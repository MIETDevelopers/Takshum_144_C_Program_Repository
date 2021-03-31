//Author Name= Takshum Bhau
// Creation Date= 26-03-2021
// Purpose= Addition Of 2D Array
#include <stdio.h> //preprocessive directive to include standard input output function header file
int main(){ //main function body starts


	int a[2][3],b[2][3],c[2][3],i,j; //variable declaration 
	printf("\nENTER VALUES FOR MATRIX A:\n"); // taking Matrix A elemnts
	for(i=0;i<2;i++) // for loop 
		for(j=0;j<3;j++) // for loop 
			scanf("%d",&a[i][j]); // taking input 
	printf("\nENTER VALUES FOR MATRIX B:\n");  // taking Matrix B elemnts 
	for(i=0;i<2;i++)// for loop 
		for(j=0;j<3;j++)// for loop 
			scanf("%d",&b[i][j]);// taking input 
	for(i=0;i<2;i++)// for loop 
		for(j=0;j<3;j++)// for loop 
			c[i][j]=a[i][j]+b[i][j]; //Logic 
	printf("\nTHE VALUES OF MATRIX C ARE:\n"); // Prinitng the Matrix C 
	for(i=0;i<2;i++)
        {
		for(j=0;j<3;j++) //for loop 
			printf("%5d",c[i][j]); // Printing the matrix 
		printf("\n");
	}
	return 0; //return statement
}// main function body ends

