#include <stdio.h>

#define MAX_NODES 10

// Define the structure of a node in the linked list
typedef struct Node {
    int data;
    int next; // Index of the next node in the array, -1 if no next node
} Node;

// Function to initialize the linked list
void initList(Node nodes[], int* head) {
    for (int i = 0; i < MAX_NODES; i++) {
        nodes[i].next = -1;
    }
    *head = -1;
}

// Function to add a node to the linked list
int addNode(Node nodes[], int* head, int data) {
    static int freeIndex = 0;
    
    // Check if we have space for more nodes
    if (freeIndex >= MAX_NODES) {
        printf("No space left to add new nodes.\n");
        return -1;
    }

    // Create a new node
    int newIndex = freeIndex++;
    nodes[newIndex].data = data;
    nodes[newIndex].next = -1;

    // If the list is empty, add the node as the head
    if (*head == -1) {
        *head = newIndex;
    } else {
        // Otherwise, find the end of the list and append the new node
        int current = *head;
        while (nodes[current].next != -1) {
            current = nodes[current].next;
        }
        nodes[current].next = newIndex;
    }
    return newIndex;
}

// Function to print the linked list
void printList(Node nodes[], int head) {
    int current = head;
    while (current != -1) {
        printf("%d -> ", nodes[current].data);
        current = nodes[current].next;
    }
    printf("NULL\n");
}

int main() {
    Node nodes[MAX_NODES];
    int head;

    // Initialize the linked list
    initList(nodes, &head);

    // Add some nodes to the linked list
    addNode(nodes, &head, 10);
    addNode(nodes, &head, 20);
    addNode(nodes, &head, 30);

    // Print the linked list
    printList(nodes, head);

    return 0;
}
