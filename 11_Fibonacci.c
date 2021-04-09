//Author Name= Takshum Bhau
//Creation Date= 18-03-2021
//purpose= Fibonacci series using for loop
#include <stdio.h>// pre processor directive to include standard input output function header file
int main() { //main function body starts
    int i, n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;// return statement
}
