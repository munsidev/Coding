#include <stdio.h>
#include <stdlib.h>

// Define the structure for a BST node
struct Node {
    int key;
    struct Node* left;
    struct Node* right;
};

// Function to create a new BST node
struct Node* newNode(int item) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

// Function to insert a new node with the give
struct Node* insert(struct Node* node, int key) {
    if (node == NULL)
        return newNode(key);

    if (node->key == key)
        return node;  // Key already exists

    if (node->key < key)
        node->right = insert(node->right, key);
    else
        node->left = insert(node->left, key);

    return node;
}

// Function to perform inorder tree traversal
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

// Function to search for a node by key
struct Node* search(struct Node* root, int key) {
    if (root == NULL || root->key == key)
        return root;

    if (key < root->key)
        return search(root->left, key);
       return search(root->right, key);
}

void update(struct Node* root, int oldKey, int newKey) {
    struct Node* nodeToUpdate = search(root, oldKey);
    if (nodeToUpdate == NULL) {
        printf("Node with key %d not found in the tree.\n", oldKey);
        return;
    }
    if (nodeToUpdate->key == newKey) {
        printf("new key and current key same. No update needed.\n");
        return;
    }
    nodeToUpdate->key = newKey;
    printf("Updated node with key %d to %d.\n", oldKey, newKey);
}

// Driver program to test the above functions
int main() {
    struct Node* root = newNode(50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

    printf("Inorder traversal before update: ");
    inorder(root);
    printf("\n");
    update(root, 30, 35);

    printf("Inorder traversal after update: ");
    inorder(root);
    printf("\n");

    update(root, 100, 105);

    return 0;
}
