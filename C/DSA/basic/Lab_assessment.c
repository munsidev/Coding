#include <stdio.h>
struct Node {
    int data;
    struct Node* next;
};
void output(struct Node* current)
{
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node a, b, c;
   
    a.data = 10;
    b.data = 20;
    c.data = 30;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    output(&a);
    return 0;
}
 