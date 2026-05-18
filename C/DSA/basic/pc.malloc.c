#include<stdio.h>
#define MAX_NODES 10


typedef struct Node {
    int data;
    int next; 
} Node;
int addNode(Node nodes[], int* head, int data) {
    static int freeIndex = 0;
    
    // Check if we have space for more nodes
   
}
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
    

    // Add some nodes to the linked list
    addNode(nodes, &head, 10);
    addNode(nodes, &head, 20);
    addNode(nodes, &head, 30);

    // Print the linked list
    printList(nodes, head);

    return 0;
}
