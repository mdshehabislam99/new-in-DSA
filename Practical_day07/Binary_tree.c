#include<stdio.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

int main(){

    struct node *root = NULL;
    root = (struct node*)malloc(sizeof(struct node));
    root->data = 1;
    root->left = (struct node*)malloc(sizeof(struct node));
    root->left->data = 2;
    root->right = (struct node*)malloc(sizeof(struct node));
    root->right->data = 3;

    printf("Root: %d\n", root->data);
    printf("Left Child: %d\n", root->left->data);
    printf("Right Child: %d\n", root->right->data);

    return 0;
}