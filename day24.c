#include<stdio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node * next;
};

void p_rint(struct node * ptr) {
    while (ptr != NULL) {
        printf("%d\t", ptr->info);
        ptr=ptr->next;
    }
}

struct node * in_putting() {
    struct node * head = NULL, *newnode = NULL, *temp = NULL;
    int i,n;

    printf("Enter no. of nodes you want: ");
    scanf("%d", &n);

    for (i=0;i<n;i++) {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter info for node %d: ", i+1);
        scanf("%d", &newnode->info);

        newnode->next=NULL;

        if (head == NULL) {
            head = newnode;
            temp = newnode;
        }
        else {
            temp->next = newnode;
            temp = newnode;
        }
    }
    p_rint(head);
    printf("\n");

    return head;
}
void free_list(struct node * head) {
    struct node * temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

void main() {
    int item;
    struct node *head = in_putting(), *ptr = head, *prev = head;

    printf("Enter element you want to delete: ");
    scanf("%d", &item);

    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    if (head->info == item) {
        struct node *temp = head;
        head = head->next;
        free(temp);
        printf("Successfully Deleted %d\n", item);
        p_rint(head);
        free_list(head);
        return;
    }

    while (ptr != NULL && ptr->info != item) {
        prev = ptr;
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("\nElement not found nothing deleted!!\n");
        p_rint(head);
        free_list(head);
        exit(0);
    }

    prev->next = ptr->next;
    printf("\nSuccessfully Deleted %d from LinkedList!!\n", item);
    p_rint(head);
    free(ptr);
    free_list(head);
}