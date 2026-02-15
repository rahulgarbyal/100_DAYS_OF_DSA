#include<stdio.h>
#include<stdlib.h>
void in_put(int r, int c, int mat[r][c]) {
    int i,j;
    printf("\n-----ENTER MATRIX-----\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}
int mat_diagonal_sum(int r, int c, int mat[r][c]) {
    int i,j,sum=0;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if (i==j) {
                sum += mat[i][j];
            }
        }
    }
    return sum;
}

void main () {
    int r,c,pri_dia_sum;
    printf("Enter row and col. size(eg. 3 3): ");
    scanf("%d %d", &r, &c);

    if (r != c){
        printf("primary diagonal sum not possible!!");
        exit(0);
    }

    int matrix[r][c];
    in_put(r,c,matrix);

    pri_dia_sum = mat_diagonal_sum(r,c,matrix);

    printf("\nThe primary diagonal sum is: %d", pri_dia_sum);
}