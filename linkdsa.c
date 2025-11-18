// Binary search tree operations
#include <stdio.h

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;
 struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;

    f