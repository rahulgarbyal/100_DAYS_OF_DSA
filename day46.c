#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *head = NULL, *tail = NULL;

void insertEnd(int val) {
    struct ListNode *temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    temp->data = val;
    temp->next = NULL;

    if (head == NULL) {
        head = tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
}

int height(struct Node *root) {
    if (root == NULL)
        return 0;

    int left = height(root->left);
    int right = height(root->right);

    return (left > right ? left : right) + 1;
}

void storeLevel(struct Node *root, int level) {
    if (root == NULL)
        return;

    if (level == 1) {
        insertEnd(root->data);
    } else {
        storeLevel(root->left, level - 1);
        storeLevel(root->right, level - 1);
    }
}

void levelOrder(struct Node *root) {
    int h = height(root);

    for (int i = 1; i <= h; i++) {
        storeLevel(root, i);
    }

    struct ListNode *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}