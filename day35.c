#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

void enqueue(int x) {
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->data = x;
    new->next = NULL;

    if (rear == NULL) {
        front = rear = new;
    } else {
        rear->next = new;
        rear = new;
    }
}

void display() {
    struct node *temp = front;

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {
    int n, x;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        enqueue(x);
    }

    display();

    return 0;
}