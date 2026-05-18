#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* root = NULL;

// Function to create a new node
struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a node in the BST
void insert(int data) {
    struct node* newNode = createNode(data);
    if (root == NULL) {
        root = newNode;
        return;
    }
    struct node* current = root;
    struct node* parent = NULL;
    while (current != NULL) {
        parent = current;
        if (data < current->data) {
            current = current->left;
        } else if (data > current->data) {
            current = current->right;
        } else {
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

// Helper function to find the minimum value node in a subtree
struct node* findMin(struct node* node) {
    while (node->left != NULL) {
        node = node->left;
    }
    return node;
}

// Function to delete a node from the BST
void deleteNode(int data) {
    struct node* current = root;
    struct node* parent = NULL;

    // Search for the node to delete and its parent
    while (current != NULL && current->data != data) {
        parent = current;
        if (data < current->data) {
            current = current->left;
        } else {
            current = current->right;
        }
    }

    if (current == NULL) {
        printf("Value %d not found in the BST.\n", data);
        return;
    }

    // Case 1: Node with no child (leaf node)
    if (current->left == NULL && current->right == NULL) {
        if (current == root) {
            root = NULL;
        } else if (parent->left == current) {
            parent->left = NULL;
        } else {
            parent->right = NULL;
        }
        free(current);
    }
    // Case 2: Node with one child
    else if (current->left == NULL || current->right == NULL) {
        struct node* child = (current->left != NULL) ? current->left : current->right;
        if (current == root) {
            root = child;
        } else if (parent->left == current) {
            parent->left = child;
        } else {
            parent->right = child;
        }
        free(current);
    }
    // Case 3: Node with two children
    else {
        struct node* successor = findMin(current->right);
        int successorData = successor->data;
        deleteNode(successorData);
        current->data = successorData;
    }
}

// Function to update a value in the BST
void update(int oldValue, int newValue) {
    // Check if the old value exists
    struct node* current = root;
    while (current != NULL && current->data != oldValue) {
        if (oldValue < current->data) {
            current = current->left;
        } else {
            current = current->right;
        }
    }

    if (current == NULL) {
        printf("Value %d not found in the BST.\n", oldValue);
        return;
    }

    // Check if the new value already exists
    struct node* check = root;
    while (check != NULL) {
        if (check->data == newValue) {
            printf("Value %d already exists in the BST. Update aborted.\n", newValue);
            return;
        }
        if (newValue < check->data) {
            check = check->left;
        } else {
            check = check->right;
        }
    }

    // Perform update
    deleteNode(oldValue);
    insert(newValue);
    printf("Value %d updated to %d successfully.\n", oldValue, newValue);
}

// Function to perform in-order traversal of the BST
void inorder(struct node* node) {
    if (node == NULL) return;
    inorder(node->left);
    printf("%d ", node->data);
    inorder(node->right);
}

// Main function
int main() {
    insert(50);
    insert(30);
    insert(70);
    insert(20);
    insert(40);
    insert(60);
    insert(80);

    printf("In-order Traversal of the BST: ");
    inorder(root);
    printf("\n");

    // Update node examples
    printf("\nUpdating 20 to 25...\n");
    update(20, 25);
    printf("In-order Traversal after update: ");
    inorder(root);
    printf("\n");

    printf("\nUpdating 30 to 35...\n");
    update(30, 35);
    printf("In-order Traversal after update: ");
    inorder(root);
    printf("\n");

    printf("\nUpdating 50 to 55...\n");
    update(50, 55);
    printf("In-order Traversal after update: ");
    inorder(root);
    printf("\n");

     printf("\nDeleting 30...\n");
    deleteNode(55);
    printf("In-order Traversal after deletion: ");
    inorder(root);
    printf("\n");

    return 0;
}
