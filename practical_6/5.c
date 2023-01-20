//5.	Program to find the row sum and the column sum of a matrix of order m x n.

#include<stdio.h>
#include<conio.h>
void main(){
    int arr[50][50],i,j,row,column,r_sum,c_sum;
    clrscr();
    printf("Enter number of rows: ");
    scanf("%d",&row);
    printf("\nEnter number of columns: ");
    scanf("%d",&column);
    // input
    printf("\nEnter elements of matrix:\n");
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    // Row_Sum of matrix
    for(i=0;i<row;i++){
        r_sum=0;
        for(j=0;j<column;j++){
            r_sum+=arr[i][j];
        }
        printf("%dth row sum= %d\n",(i+1),r_sum);
    }

    // Coloumn_Sum of matrix
    for(i=0;i<row;i++){
        c_sum=0;
        for(j=0;j<column;j++){
            c_sum+=arr[j][i];
        }
        printf("%dth column sum= %d\n",(i+1),c_sum);
    }
    getch();
}