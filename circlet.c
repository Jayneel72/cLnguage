#include<stdio.h>
#include<conio.h>
void main(){
 int i,j,k,num=11;

 for(i=1;i<=5;i++){
   for(j=41;j<41+i;j++){
    printf("%d ",j);
   }
   printf("\n");
 }

 printf("\n");

 for(i=1;i<=4;i++){
  for(j=1;j<=i;j++){
  printf("%d ",num);
  num++;
  }
  printf("\n");
 }

 printf("\n");

 for(i=5;i>=1;i--){
  for(k=1;k<i;k++){
    printf(" ");
    }
    for(j=5;j>=i;j--){
    printf("%d", j);
    }
    printf("\n");
   }

  printf("\n");

  for(i=5;i>=1;i--){
    for(j=5;j>i;j--){
    printf(" ");
    }
    for(j=1;j<=i;j++){
    printf("%d",j%2);
    }
    printf("\n");
  }

  printf("\n");

   for(i=5;i>=1;i--){
     for(j=1;j<i;j++){
    printf("  ");
    }
     for(j=i;j<=5;j++){
    printf("%d ", j);
    }
     for(j=4;j>=i;j--){
    printf("%d ", j);
    }
    printf("\n");
   }

   printf("\n");


    for(i=1;i<=5;i++){
     for(j=1;j<=i;j++){
        printf("%d ", j);
    }
    for(k=1;k<=(5-i)*2;k++){
        printf("  ");
    }
    for(j=i;j>=1;j--){
        printf("%d ", j);
    }
        printf("\n");
    }

   printf("\n");

   for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 3) {
                printf("* ");
            }
            else if(i == 2 && (j == 1 || j == 5)) {
                printf("* ");
            }
            else if(i >= 4 && j == 1) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

}