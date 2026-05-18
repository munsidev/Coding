#include<stdio.h>

typedef struct abc {
    int value;
    struct abc* next;
} x;

void insert(x* head) {
    int a;
    scanf("%d", &a);
    head->value = a;
    head->next = NULL;
}

int main() {
    x arr[5];

    // Take all inputs first
    for (int i = 0; i < 5; i++) {
        insert(&arr[i]);
    }

    // Print all stored values after input
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i].value);
    }

    return 0;
}
