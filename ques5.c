#include <stdio.h>
int main() {
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int i,j,n=sizeof(a)/sizeof(a[0]);  
  int c,r,sum=0,co;
printf("for sum first choose row or column\n"); 
printf("1. row\n");
printf("2. column\n");
scanf("%d",&c);
if(c==1){
    printf("select row number\n");
    scanf("%d",&r);
    for(j=0;j<n;j++){
         sum=sum +a[r-1][j];

    }printf("sum of row %d is %d\n",r,sum);}
    if(c==2){
        printf("select column number\n");
        scanf("%d",&co);
    for(i=0;i<n;i++){sum=a[i][co-1] +sum;}
printf("sum of column %d is %d\n",co,sum);}

    return 0;
}