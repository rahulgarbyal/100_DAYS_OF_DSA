#include<stdio.h>
#include<stdlib.h>

struct node {
    int coeff;
    int expo;
    struct node *next;
};

void create_poly(struct node **head) {
    struct node *new = NULL, *temp = NULL;
    int i,n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        new = (struct node*)malloc(sizeof(struct node));
        
        printf("Enter coefficient and Exponent : ");
        scanf("%d %d", &new->coeff, &new->expo);

        new->next = NULL;

        if(*head == NULL) {
            *head = new;
            temp = new;
        }
        else{
            temp->next = new;
            temp = new;
        }
    }
}

void display_poly(struct node *head) {
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%dx^%d", ptr->coeff, ptr->expo);
        if (ptr->next != NULL) {
            printf(" + ");
        }
        ptr = ptr->next;
    }
} 
void main() {
    struct node *head = NULL;
    create_poly(&head);
    display_poly(head);
}