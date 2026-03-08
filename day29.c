#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int info;
    struct node *next;
}node;

void insert(struct node **head,int n) {
    node *newnode = NULL, *temp = NULL;
    int i;

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
void rotate(struct node **head, int k, int n) {
    if (*head == NULL) {
        printf("Empty list!");
        exit(0);
    }
    if (n == k) {
        return;
    }
    int i;
    node *ptr = *head;
    for (i = 0; i < n-k-1; i++) {
        ptr = ptr->next;
    }

    *head = ptr->next;
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
    int k,n;
    node *head = NULL;
    
    printf("enter no. of nodes you want: ");
    scanf("%d", &n);

    insert(&head,n);

    printf("Enter for k: ");
    scanf("%d", &k);

    rotate(&head,k,n);
    traversal(head);
}