#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *next;
    struct node *prev;
};

void p_rint(struct node *head) {
    if (head == NULL) {
        return;
    }
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->info);
        ptr = ptr->next;
    }
    printf("\n");
}

void in_putting(struct node **head) {
    struct node *newnode = NULL, *temp = NULL;
    int i,n;

    printf("Enter no. of nodes you want: ");
    scanf("%d", &n);

    for (i=0;i<n;i++) {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter info for node %d: ", i+1);
        scanf("%d", &newnode->info);

        newnode->next = NULL;
        newnode->prev = NULL;

        if (*head == NULL) {
            *head = newnode;
            temp = newnode;
        }
        else {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
    }
    printf("\n");
}
void free_list(struct node *head) {
    if (head == NULL)
        return;

    struct node *temp;
    while (head != NULL) {
        temp = head;
        head= head->next;
        free(temp);
    }
}
void main()
{
    struct node *head = NULL;
    in_putting(&head);
    p_rint(head);
    free_list(head);
}