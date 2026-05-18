#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* root = NULL;

struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if (!newNode) {
        printf("Memory error\n");
        return NULL;
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

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

struct node* findMin(struct node* node) {
    while (node->left != NULL) {
        node = node->left;
    }
    return node;
}

struct node* deleteNode(struct node* root, int data) {
    if (root == NULL) {
        printf("Value %d not found in the BST.\n", data);
        return root;
    }

    if (data < root->data) {
        root->left = deleteNode(root->left, data);
    } else if (data > root->data) {
        root->right = deleteNode(root->right, data);
    } else {
        // Node with only one child or no child
        if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children: Get the inorder successor
        struct node* temp = findMin(root->right);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void inorder(struct node* node) {
    if (node == NULL) return;
    inorder(node->left);
    printf("%d ", node->data);
    inorder(node->right);
}

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

    // Delete node examples
    printf("\nDeleting 20...\n");
    root = deleteNode(root, 20);
    printf("In-order Traversal after deletion: ");
    inorder(root);
    printf("\n");

    printf("\nDeleting 30...\n");
    root = deleteNode(root, 30);
    printf("In-order Traversal after deletion: ");
    inorder(root);
    printf("\n");

    printf("\nDeleting 50...\n");
    root = deleteNode(root, 50);
    printf("In-order Traversal after deletion: ");
    inorder(root);
    printf("\n");

    return 0;
}
