#include <stdio.h>
#include <stdlib.h>

// Definition of a Node in the BST
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Global root variable
struct Node* root = NULL;

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory error\n");
        return NULL;
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a new node into the BST
void insert(int data) {
    struct Node* newNode = createNode(data);
    if (root == NULL) {
        root = newNode;
        return;
    }

    struct Node* current = root;
    struct Node* parent = NULL;

    while (current != NULL) {
        parent = current;
        if (data < current->data) {
            current = current->left;
        } else if (data > current->data) {
            current = current->right;
        } else {
            // Duplicate values are not allowed
            printf("Value %d already exists in the BST.\n", data);
            free(newNode);
            return;
        }
    }

    if (data < parent->data) {
        parent->left = newNode;
    } else {
        parent->right = newNode;
    }
}

// Function to perform in-order traversal of the BST
void inOrderTraversal(struct Node* node) {
    if (node == NULL)
        return;

    inOrderTraversal(node->left);
    printf("%d ", node->data);
    inOrderTraversal(node->right);
}

// Main function to test the BST insert function
int main() {
    // Insert nodes into the BST
    insert(50);
    insert(30);
    insert(70);
    insert(20);
    insert(40);
    insert(60);
    insert(80);

    // Print in-order traversal
    printf("In-order Traversal of the BST: ");
    inOrderTraversal(root);
    printf("\n");

    return 0;
}
