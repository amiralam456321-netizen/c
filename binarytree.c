#include<stdio.h>
#include<stdlib.h>// Online C compiler to run C 
    struct Node
    {
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node* insert(struct Node*, int);
struct Node* createNode(int);
void inorder(struct Node*);
struct Node* deleteNode(struct Node* , int );
struct Node* findMin(struct Node* node);
void main() {
    struct Node* root = NULL;
    int choice, value;
    while (1)
    {
        printf("\nBinary Search Tree Operations\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. In-order Traversal\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                root = insert(root, value);
                printf("%d inserted.\n", value);
                break;
            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
               root = deleteNode(root, value);
                printf("%d deleted (if it existed).\n", value);
                break;
            case 3:
                printf("In-order traversal: ");
                inorder(root);
                printf("\n");
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    
        
    }
}
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) 
        return createNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);

    return root;
}
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
struct Node* deleteNode(struct Node* root, int data) {
    if (root == NULL) // Tree is empty
        return root;

    // Traverse the tree to find the node to delete
    if (data < root->data) {
        root->left = deleteNode(root->left, data);
    } else if (data > root->data) {
        root->right = deleteNode(root->right, data);
    } else {
        // Node to be deleted found
        // Case 1: Node with no children (leaf node)
        if (root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        }
        // Case 2: Node with only one child (either left or right)
        else if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        // Case 3: Node with two children
        else {
            // Find the in-order successor (smallest in the right subtree)
            struct Node* temp = findMin(root->right);
            // Copy the in-order successor's data to this node
            root->data = temp->data;
            // Delete the in-order successor
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}
struct Node* findMin(struct Node* node) {
    struct Node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}
//20,15,13,25,30,35,21,3,6,5