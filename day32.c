#include<stdio.h>
#include<stdlib.h>

#define N 10
int stck[N], top = -1;

void push(int item) {
    if (top == N-1) {
        printf("Stack Overflow!!\n");
    }
    else {
        top++;
        stck[top] = item;
        printf("%d pushed into stack!!\n", item);
    }
}

void pop() {
    if (top == -1) {
        printf("stack is empty!!\n");
    }
    else {
        printf("Element popped: %d\n", stck[top]);
        top--;
    }
}

void traverse() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stck[i]);
        }
    }
}

int main () {
    int i,m,n,item;
    printf("Enter no. of elements to PUSH: ");
    scanf("%d", &n);

    for (i = 0; i < n ; i++) {
        printf("Enter element to PUSH: ");
        scanf("%d", &item);
        push(item);
    }

    printf("Enter how many times you want to pop: ");
    scanf("%d", &m);

    for(i = 1;i <= m;i++) {
        pop();
    }

    traverse();

}