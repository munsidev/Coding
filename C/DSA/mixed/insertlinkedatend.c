#include<stdio.h>
#include<stdlib.h>
struct node *creatLinkedList(int arr[], int size);
void insertAtBeginning(struct node *head , int data);
void printList(struct node *head);
void insertAtTheEnd(struct node *head , int data);

struct node {
    int data;
    struct node *next;
};

int main (){
  int arr[]  = {2,3,4,5,6,7,8,9};
  struct node *head;
  head = creatLinkedList(arr , 8);

  printList (head);
  insertAtTheEnd(head , 232);

return 0;
}

void insertAtTheEnd(struct node *head , int data){
struct node *current = head;
while(current ->next != NULL){
    current = current ->next;
}
 struct node *temp = (struct node*)malloc(sizeof(struct node));
temp ->data = data;
temp ->next = NULL;

current ->next = temp;
printList(head);
}

void insertAtBeginning(struct node *head , int data){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
temp ->data = data;
temp ->next = head;

struct node *newhead = temp;
struct node *current = newhead;
newhead = temp;
printList(newhead);
}

void printList (struct node *head){
struct node *current = head;
while(current != NULL){
    printf("%d ->" , current ->data);
    current = current ->next;
}
printf("NULL\n");
}

struct node *creatLinkedList(int arr[], int size){
    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *current = NULL;

    int i;
    for(i=0 ; i<size; i++){
        temp = (struct node*)malloc(sizeof(struct node));
        temp ->data = arr[i];
        temp ->next = NULL;

        if(head == NULL){
            head = temp;
            current = temp;
        }else{
            current ->next = temp;
            current = current ->next;
        }
    }
    return head;
}