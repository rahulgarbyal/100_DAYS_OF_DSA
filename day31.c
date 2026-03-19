#include<stdio.h>
#include<stdlib.h>

#define N 10
int stck[N], top = -1;

void push(int item) {
    char choice;
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
    char choice;
    if (top == -1) {
        printf("stack is empty!!\n");
    }
    else {
        printf("Element popped: %d\n", stck[top]);
        top--;
    }
}

void traverse() {
    char choice;

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
    int op, option, item;
    printf("No. of operations : ");
    scanf("%d", &op);

    while(op) {
        printf("(1)PUSH \n");
        printf("(2)POP\n");
        printf("(3)DISPLAY\n");
        printf("Select operation: ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                    printf("Enter value to PUSH : ");
                    scanf("%d", &item);
                    push(item);
                    op--;
                    break;
            case 2:
                    pop();
                    op--;
                    break;
            case 3:
                    traverse();
                    op--;
                    break;
            default:
                    printf("Invalid choice!!\n");
        }
    }
}