#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node* find_middle(struct node *head) {
    struct node *last = head;
    struct node *fast = head;

    while (fast != NULL && fast->next != NULL) {
        last = last->next;
        fast = fast->next->next;
    }

    return last; 
}

int main() {
    struct node *head = NULL;
    struct node *p = NULL;
    struct node *newnode = NULL;

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        newnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
            p = newnode;
        } else {
            p->next = newnode;
            p = newnode;
        }
    }

    struct node *middle_node = find_middle(head);
    if (middle_node != NULL) {
        printf("%d\n", middle_node->data);
    } else {
        printf("The linked list is empty.\n");
    }

    return 0;
}