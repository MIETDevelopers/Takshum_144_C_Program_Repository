//Author Name= Takshum Bhau
//Creation Date= 30-03-2021
//Purpose= Read and write in a file
#include <stdio.h>//preprocessor directive to include standard input output function header file
#include <stdlib.h>// important to include

int main(){//main function body starts

   FILE *fptr;  // declaring a file type variable.
   fptr = fopen("./txt.txt", "w"); // opening a file in write mode
   if (fptr == NULL)// condition to verify that file is opened or not
   {
      printf("Error! in opening a file ");
      exit(1);
   }
   fprintf(fptr, "Hello India"); // writing in file

   fclose(fptr);
   return 0;
}

