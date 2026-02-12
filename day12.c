#include<stdio.h>
#include<stdlib.h>
void check_symmetric(int r, int c,int arr[r][c]) {
    int i,j;
    for (i=0;i<r;i++) {
        for (j=i+1;j<c;j++) {
            if (arr[i][j] != arr[j][i]) {
                printf("Not a Symmetric matrix!!");
                exit(0);
            }
        }
    }
    printf("Symmetric Matrix!");
}
void main() {
    int r,c,i,j;
    printf("Enter no. of rows and coloumns: ");
    scanf("%d %d", &r, &c);
    int A[r][c];
    printf("\n----INSERT MATRIX----\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            scanf("%d", &A[i][j]);
        }
    }
    check_symmetric(r,c,A);
}