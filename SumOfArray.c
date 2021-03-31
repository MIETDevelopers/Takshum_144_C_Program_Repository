//Author Name= Takshum Bhau
//Creation Date= 24-03-2021
//Purpose=  sum of elements of an array with 10 integer elements. 
#include<stdio.h>//preprocessor directive to include standard input output function header file
#include <conio.h>
 int main()
{// main function body starts
    int a[10],i,n,sum=0;
   
    printf("Enter size of the array : ");
    scanf("%d",&n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
 
    
    for(i=0; i<n; i++)
    {
         
        sum+=a[i];
    }
     printf("sum of array is : %d",sum);
 
    return 0;// return statement
}// main function body ends
