//Author Name= Takshum Bhau
//Creation Date= 21-03-2021
//Purpose= To demonstrate the use of string operations


#include <stdio.h> //preprocessor directive to include standard input output function header file
#include <string.h> //Pre-Process directive to include string input output header file
int main(){//main function body starts


    /* String Declaration*/
    char nickname[20];

    /* Console display using puts */
    puts("Enter your Nick name:");

    /*Input using gets*/
    gets(nickname);

    puts(nickname);

    return 0;//return statement
}//main function body ends
