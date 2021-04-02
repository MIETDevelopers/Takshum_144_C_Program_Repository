//Author Name= Takshum Bhau
//Creation Date= 18-03-2021
// A C Program to check whether the entered number is Odd or Even.
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num); //It will scan the numbers entered by user.
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    return 0;
}
