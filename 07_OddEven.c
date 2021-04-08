//Author Name= Takshum Bhau
//Creation Date= 18-03-2021
// A C Program to check whether the entered number is Odd or Even.
#include <stdio.h>// pre processor directive to include standard input output function header file
int main() {// main function body starts
    int num;// variable declaration
    printf("Enter an integer: ");// Taking input from the user
    scanf("%d", &num); //It is going to scan the numbers entered by user.
    if(num % 2 == 0)
        printf("%d is even.", num);// printing statement
    else
        printf("%d is odd.", num);// printing statement
    return 0;// return statement
}// main function body ends
