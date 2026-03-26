#include <stdio.h>
#include <stdbool.h>

#define MAX 100

int dq[MAX];
int front = -1, rear = -1;

bool isEmpty() {
    return front == -1;
}

bool isFull() {
    return (front == 0 && rear == MAX - 1) || (front == rear + 1);
}

void push_front(int x) {
    if (isFull()) return;

    if (isEmpty()) {
        front = rear = 0;
    } else if (front == 0) {
        front = MAX - 1;
    } else {
        front--;
    }

    dq[front] = x;
}

void push_back(int x) {
    if (isFull()) return;

    if (isEmpty()) {
        front = rear = 0;
    } else if (rear == MAX - 1) {
        rear = 0;
    } else {
        rear++;
    }

    dq[rear] = x;
}

void pop_front() {
    if (isEmpty()) return;

    if (front == rear) {
        front = rear = -1;
    } else if (front == MAX - 1) {
        front = 0;
    } else {
        front++;
    }
}

void pop_back() {
    if (isEmpty()) return;

    if (front == rear) {
        front = rear = -1;
    } else if (rear == 0) {
        rear = MAX - 1;
    } else {
        rear--;
    }
}

int getFront() {
    if (isEmpty()) return -1;
    return dq[front];
}

int getBack() {
    if (isEmpty()) return -1;
    return dq[rear];
}

int size() {
    if (isEmpty()) return 0;
    if (rear >= front) return rear - front + 1;
    return MAX - front + rear + 1;
}

int main() {
    push_back(10);
    push_back(20);
    push_front(5);
    push_front(2);

    printf("Front: %d\n", getFront());
    printf("Back: %d\n", getBack());
    printf("Size: %d\n", size());

    pop_front();
    printf("After pop_front, Front: %d\n", getFront());

    pop_back();
    printf("After pop_back, Back: %d\n", getBack());

    printf("Final Size: %d\n", size());

    return 0;
}