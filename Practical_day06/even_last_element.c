 #include <stdio.h>
#include <stdlib.h>

struct node{        
    int data;
    struct node *next;
};

int even_last_element(struct node *head) {
    struct node *current = head;
    int last_even = -1; 
    while (current != NULL) {
        if (current->data % 2 == 0) {
            last_even = current->data; 
        }
        current = current->next;
    }

    return last_even; 
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
    int result = even_last_element(head);
    printf("%d\n", result);
    return 0;
}