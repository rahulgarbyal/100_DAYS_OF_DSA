#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *next;
};

void display(struct node *ptr) {
    while (ptr != NULL) {
        printf("%d\t", ptr->info);
        ptr=ptr->next;
    }
}
void free_list(struct node *head) {
    struct node * temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
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

        if (*head == NULL) {
            *head = newnode;
            temp = newnode;
        }
        else {
            temp->next = newnode;
            temp = newnode;
        }
    }
    printf("\n");
}
void count_occ(struct node *head) {
    int count = 0, search;
    printf("Enter element you want to count occurance of: ");
    scanf("%d", &search);

    struct node *ptr = head;
    while (ptr != NULL) {
        if (ptr->info == search) {
            count++;
        }
        ptr = ptr->next;
    }

    printf("No. of Occurances of %d is : %d", search, count);
}
void main () {
    struct node *head = NULL;
    in_putting(&head);
    count_occ(head);
}