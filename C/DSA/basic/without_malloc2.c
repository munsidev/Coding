#include <stdio.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

int main() {
    // Create nodes statically
    struct Node n1, n2, n3;

    // Initialize node data
    n1.data = 10;
    
    n2.data = 20;
    n3.data = 30;


    // Link the nodes
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    // Print the linked list
    struct Node* current = &n1;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    return 0;
}
