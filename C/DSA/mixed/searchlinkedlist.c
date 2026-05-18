#include<stdio.h>
#include<stdlib.h>

struct node *createLinkedList(int arr[], int size);
int searchinLinkedist(struct node *head , int value);

struct node {
    int data;
    struct node *next;
};

int main (){

int a[] = {28,5,15,16,};
struct node *head = NULL;
head = createLinkedList(a,3);
struct node *current = head;
printf("Index : %d\n",searchinLinkedList(head,15));
return 0;
}

int searchinLinkedist(struct node *head , int value){
    int index=1;
   while(head != NULL) {
    if (head->data == value){
        return index;
    }
    index ++;
    head = head->next;
   }
   return -1;
}
struct node *creatLinkedList(int arr[], int size){
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









