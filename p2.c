#include <stdio.h>

int main()
{
    int i, digit=0;
    printf("Enter Any Number :");
    scanf("%d", &i);


    if (i==0)
       printf("there is one digit in the number.",digit);
       else{
    while (i > 0)
    {
        i /= 10;
        digit++;
    }

    printf("there are %d digits in the number.", digit);
}
}