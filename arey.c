#include <stdio.h>

int main(){

    int a[] = { 5,6,7,8,9,0,1,2,34,5,66};
    int lenght = sizeof(a) / sizeof(a[0]);

    for ( int i=0; i < lenght; i++ ){
        printf("%d\n", a[i]);
    }
}