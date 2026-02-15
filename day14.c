#include<stdio.h>
#include<stdbool.h>
void in_put(int r, int c, int mat[r][c]) {
    int i,j;
    printf("\n-----ENTER MATRIX-----\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

bool check_identity_mat(int r, int c, int mat[r][c]){
    int i,j;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if (i==j && mat[i][j] != 1) {
                return false;
            }
        }
    }
    return true;
}

void main() {
    int r,c;
    printf("Enter row and col. size (eg. 3 3): ");
    scanf("%d %d", &r, &c);

    int matrix[r][c];
    in_put(r, c, matrix);

    if (check_identity_mat(r,c,matrix)) {
        printf("Identity matrix!!\n");
    }
    else {
        printf("Not an identity matrix!!\n");
    }
}