#include <stdio.h>

#define MAX_SIZE 100

void heapifyDown(int heap[], int size, int index) {
    int smallest = index;
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;

    if (leftChild < size && heap[leftChild] < heap[smallest])
        smallest = leftChild;

    if (rightChild < size && heap[rightChild] < heap[smallest])
        smallest = rightChild;

    if (smallest != index) {
        int temp = heap[index];
        heap[index] = heap[smallest];
        heap[smallest] = temp;

        heapifyDown(heap, size, smallest);
    }
}

void MinHeap_DeleteMin(int heap[], int* size) {
    if (*size <= 0) {
        printf("Heap is empty. Cannot delete.\n");
        return;
    }
    printf("Removing employee with performance score: %d\n", heap[0]);

    heap[0] = heap[*size - 1];
    (*size)--;

    heapifyDown(heap, *size, 0);
}

void printHeap(int heap[], int size) {
    printf("Current Min-Heap: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", heap[i]);
    }
    printf("\n");
}

int main() {
    int heap[MAX_SIZE] = {10, 20, 15, 30, 40}; 
    int size = 5;

    printf("Initial Min-Heap:\n");
    printHeap(heap, size);

    MinHeap_DeleteMin(heap, &size);

    printf("After removing the minimum:\n");
    printHeap(heap, size);

    return 0;
}
