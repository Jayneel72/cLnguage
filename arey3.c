#include <stdio.h>

int main()
{

    int a[3][3];

    a[0][0] = 1;
    a[0][1] = 2;
    a[0][2] = 3;

    a[1][0] = 4;
    a[1][1] = 5;
    a[1][2] = 6;

    a[2][0] = 7;
    a[2][1] = 8;
    a[2][2] = 9;

    int row = sizeof(a) / sizeof(a[0]);
    int col = sizeof(a[0]) / sizeof(a[0][0]);

    printf("enter the 3*3 matrix: \n", row, col);
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; col < 3; col++)
        {
            scanf("%d ", &a[row][col]);
            printf("%d ", a[row][col]);
        }
        printf("\n");
    }
}