#include <stdio.h>

int main (){

    int i ,j, k;

    for ( i=1;i<=5;i++)
    {
       for (k=5;k<i-5;k--)
       {
       printf(" ");
       }
   for(j=5;j>=i;j--)
   {
    printf("%d",j);
   }

   printf("\n");

    }
}