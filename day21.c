#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node * next;
};

void p_rint(struct node* ptr) {
    while (ptr != NULL) {
        printf("%d ", ptr->info);
        ptr = ptr->next;
    }
}

void free_list(struct node * ptr) {
    struct node * temp;
    while(ptr != NULL) {
        temp = ptr;
        ptr = ptr->next;
        free(temp);
    }
}

struct node * in_putting(struct node *head) {
    head = NULL;
    struct node* newnode = NULL, *temp = NULL;
    int i,n;

    printf("ENTER NO. OF NODES YOU WANT: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter info for node%d : ", i+1);
        scanf("%d", &newnode->info);

        newnode->next = NULL;

        if(head == NULL) {
            head = newnode;
            temp = newnode;
        }
        else {
            temp->next = newnode;
            temp = newnode;
        }
    }
    temp->next = NULL;
    return head;
}

void main() {
    struct node *head = in_putting(head);
    p_rint(head);
    free_list(head);
}