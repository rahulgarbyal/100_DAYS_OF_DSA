#include <stdio.h>

#define MAX 100

int arr[MAX];
int front = -1, rear = -1, size;

void enqueue(int x) {
    if ((rear + 1) % size == front) {
        return; 
    }

    if (front == -1) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % size;
    }

    arr[rear] = x;
}

void dequeue() {
    if (front == -1) return;

    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % size;
    }
}

void display() {
    if (front == -1) return;

    int i = front;

    while (1) {
        printf("%d ", arr[i]);
        if (i == rear) break;
        i = (i + 1) % size;
    }
}

int main() {
    int n, x, m;

    scanf("%d", &n);
    size = n;

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        enqueue(x);
    }

    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        dequeue();
    }

    display();

    return 0;
}