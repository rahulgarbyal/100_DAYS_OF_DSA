#include<stdio.h>
void add_mat(int r,int c,int A[r][c], int B[r][c], int C[r][c]){   
    int i,j;
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}
void insert_mat(int r, int c,int arr[r][c]) {
    int i,j;
    for (i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d", &arr[i][j]);
        }
    }
}
void Display_mat(int r, int c, int arr[r][c]) {
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void main() {
    int r,c;
    printf("enter row: ");
    scanf("%d", &r);
    printf("enter coloumn: ");
    scanf("%d", &c);

    int A[r][c],B[r][c],C[r][c];

    insert_mat(r,c,A);
    insert_mat(r,c,B);
    add_mat(r,c,A,B,C);
    Display_mat(r,c,C);
}