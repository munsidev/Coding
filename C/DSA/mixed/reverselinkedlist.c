#include<stdio.h>
#include<stdlib.h>

struct node *createLinkedList(int arr[], int size);

void reverseLinkedList(struct node *head);

struct node {
    int data;
    struct node *next;
};

int main (){

int a[] = {28,5,15,16,34,56,60};
struct node *head;
head = createLinkedList(a,7);

struct node *newhead = head;

while(head != NULL){
    printf("%d->", head->data);
    head = head->next;
}
printf("NULL\n");
reverseLinkedList(newhead);
return 0;
}


void reverseLinkedList(struct node *head){
    struct node *previous = NULL, *current=head, *next=NULL;
    while(current!=NULL){
        next = current->next;
        current ->next = previous;
        previous = current;
        current = next;
    }
    head = previous;
while(head != NULL){
    printf("%d->", head->data);
    head = head->next;
}
printf("NULL\n");
}


struct node *createLinkedList(int arr[], int size){
    struct node *head = NULL, *temp = NULL, *current = NULL;

int i;
for(i=0; i<size; i++){
  temp = (struct node*)malloc(sizeof(struct node)) ;
  temp->data = arr[i];
  temp->next = NULL;

  if(head == NULL){
    head = temp;
    current = temp;
  } else{
    current->next = temp;
    current = current->next;
  }

}
return head;
}


