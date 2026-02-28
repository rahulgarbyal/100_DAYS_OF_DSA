#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *next;
};

struct node* create_list(int n) {
    struct node *head = NULL, *temp = NULL, *newnode = NULL;
    
    for(int i = 0; i < n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
        scanf("%d", &newnode->info);
        newnode->next = NULL;

        if(head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }
    return head;
}

int get_length(struct node *head) {
    int len = 0;
    while(head != NULL) {
        len++;
        head = head->next;
    }
    return len;
}

void find_intersection(struct node *head1, struct node *head2) {
    int len1 = get_length(head1);
    int len2 = get_length(head2);

    int diff = abs(len1 - len2);

    if(len1 > len2) {
        for(int i = 0; i < diff; i++)
            head1 = head1->next;
    } else {
        for(int i = 0; i < diff; i++)
            head2 = head2->next;
    }

    while(head1 != NULL && head2 != NULL) {
        if(head1 == head2) {
            printf("%d\n", head1->info);
            return;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    printf("No Intersection\n");
}

int main() {
    int n, m;

    scanf("%d", &n);
    struct node *head1 = create_list(n);

    scanf("%d", &m);
    struct node *head2 = create_list(m);

    find_intersection(head1, head2);

    return 0;
}