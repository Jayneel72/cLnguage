#include <stdio.h>

int main()
{

    int marks;
    char grade;

    printf("enter your score (0-100): ");
    scanf("%d", &marks);

    grade = (marks >= 90) ? 'A' : (marks >= 80) ? 'B'
                              : (marks >= 70)   ? 'C'
                              : (marks >= 60)   ? 'D'
                              : (marks >= 50)   ? 'E'
                                                : 'F';

    printf(" your grade is : %c \n", grade);

    switch (grade)
    {

    case 'A':
        printf( "execelent work \n" );
        break;

    case 'B':
    printf("good work \n");
    break;

    case 'C':
    printf(" can do better \n");
    break;

    case 'D':
    printf(" need improvement \n ");
    break;

    case 'E':
    printf(" far to go \n");
    break;

    case 'F':
    printf( "fail");
    break;
    }

    if (grade != 'F')
    {
        printf(" you are eligible for next class.\n ");
    }
    else { printf(" you are failed \n");
    
    }
    return 0;
    

    



}