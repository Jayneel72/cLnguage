#include<stdio.h>

int main ()
{

    int number,first,last,sum;

    printf("Enter any number:");
    scanf("%d", &number);
    
    last= number % 10;
    
    while (number>10)
    {
      number = number/10;
      
    }
     first=number;
    sum = first + last;

    printf("the sum of first digit %d and last digit %d is: %d", first, last, sum);
}