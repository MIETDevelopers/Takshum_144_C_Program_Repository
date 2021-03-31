//Author Name= Takshum Bhau
//Creation Date= 31-03-2021
//Purpose= A C program to Program for reading and writing the student marks data to files.				
#include <stdio.h>//preprocessor directive to include standard input output function header file
#include <stdlib.h>//
struct s {
	//Creating a user defined data type using structures.
	char name[50];
	int RollNo;
	int Marks;
};
int main() {
	struct s a[10],b[10];
	FILE *fptr;
	int i;
	fptr=fopen("31_ReadWriteMarks.txt","wb"); //Opening the file from the location.
	for (i=0;i<1;++i) {
		fflush(stdin);
		//Scanning the entered Values.
		printf("Enter Name: ");
		gets(a[i].name);
		printf("Enter Roll Number: ");
		scanf("%d",&a[i].RollNo);
		printf("Enter Marks: ");
		scanf("%d",&a[i].Marks);
	}
	//Writing program.
	fwrite(a,sizeof(a),1,fptr);
	fclose(fptr);
	fptr=fopen("31_ReadWriteMarks.txt","rb");
	fread(b,sizeof(b),1,fptr);
	printf("\n Entered details are:\n");
	for (i=0;i<1;++i) {
		printf("	Name: %s\n	Roll Number: %d\n	Marks: %d",b[i].name,b[i].RollNo,b[i].Marks); //Printing the entered text.
	}
	fclose(fptr); //Closing the program.
}
