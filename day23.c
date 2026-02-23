#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *next;
};

void p_rint(struct node *ptr) {
    while (ptr != NULL) {
        printf("%d ", ptr->info);
        ptr = ptr->next;
    }
}

void free_list(struct node *ptr) {
    struct node *temp = ptr;
    while (ptr != NULL) {
        temp = ptr;
        ptr = ptr->next;
        free(temp);
    }
}

struct node * merg_e(struct node *ptr1, struct node *ptr2) {
    if (ptr1 == NULL) {
        return ptr2;
    }
    struct node tempo;
    struct node *tail = &tempo;
    tempo.next = NULL;
    while (ptr1 != NULL && ptr2 != NULL) {
        if (ptr1->info <= ptr2->info) {
            tail->next = ptr1;
            ptr1 = ptr1->next;
        }
        else {
            tail->next = ptr2;
            ptr2 = ptr2->next;
        }

        tail = tail->next;
    }
    
    if(ptr1 != NULL) {
        tail->next = ptr1;
    }
    else {
        tail->next = ptr2;
    }
    return tempo.next;
}

struct node * in_put() {
    struct node *head = NULL, *newnode = NULL, *temp = NULL;
    int i,n;

    printf("ENTER NO. OF NODES: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter info for node %d : ",i+1);
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
    return head;

}

void main () {
    struct node *head1 = in_put(), *head2 = in_put();
    struct node *merge = merg_e(head1,head2);
    p_rint(merge);
    free_list(merge);
}