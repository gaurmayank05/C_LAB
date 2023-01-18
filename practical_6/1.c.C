#include<stdio.h>
#include<conio.h>
int main(){
   //void arr(int [][k],int);
   int A[50][50],r,c,i,j;
   clrscr();
   printf("Enter number of rows: ");
   scanf("%d",&r);
   printf("\nEnter number of columns: ");
   scanf("%d",&c);
   printf("\nEnter elements of matrix:\n");
   for(i=0;i<r;i++){
    for(j=0;j<c;j++){
	scanf("%d",&A[i][j]);
    }
   }
   for(i=0;i<r;i++){
    for(j=0;j<c;j++){
	printf("%d\t",A[i][j]);
    }
    printf("\n");
   }
   getch();
}