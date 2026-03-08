#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int info;
    struct node *next;
}node;

void insert(struct node **head) {
    node *newnode = NULL, *temp = NULL;
    int i,n;

    printf("Enter No. of nodes you want: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        node *newnode = (struct node *)malloc(sizeof(node));

        printf("Enter info for node %d : ",i+1);
        scanf("%d", &newnode->info);
        newnode->next = NULL;

        if (*head == NULL) {
            *head = newnode;
            temp = newnode;
        }
        else {
            temp->next = newnode;
            temp = newnode;
        }
    }
    if (temp != NULL) 
        temp->next = *head; 
    
    printf("\n");
}

void traversal(struct node *head) {
    struct node *ptr = head;
    do{
        printf("%d ", ptr->info);
        ptr = ptr->next;
    } while (ptr != head);
    printf("\n");
}

void main() {
    node *head = NULL;
    insert(&head);
    traversal(head);
}