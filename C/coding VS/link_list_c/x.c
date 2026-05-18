#include<stdio.h>
typedef struct abc{
    int value;
    struct abc* next;
}x;
int main(){
    x arr[3];
    arr[0].value=2;
    arr[0].next=NULL;
    arr[1].value=3;
    arr[1].next=NULL;
    arr[2].value=2;
    arr[2].next=NULL;
    arr[0].next=&arr[1];
    arr[1].next=&arr[2];
    x a;
    a.value=10;
    a.next=NULL;
    x* head=&arr[0];
    x*temp=head;
    while(temp!=NULL){
        printf("%d ",temp->value);
        temp=temp->next;
    }
    printf("\n");
    temp=head;
    while (temp != NULL) {
        if (temp->value==2){
            a.next=temp->next; 
            temp->next = &a;
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->value);
        temp=temp->next;
    }
    printf("\n");
    temp=head;
    if(head->value==2){
        head=head->next;
    }
temp = head;
while (temp->next != NULL) {
    if (temp->next->value == 2) {
        temp->next = temp->next->next;
    }
    temp = temp->next; 
}
    temp=head;
     while(temp!=NULL){
        printf("%d ",temp->value);
        temp=temp->next;
    }
    printf("\n");

x b;
b.value = 20;
b.next = NULL;
temp = head;
while (temp != NULL) {
    if (temp->value == 10) {
        b.next = temp->next;
        temp->next = &b;
    }
    temp = temp->next;
}
temp = head;
while (temp != NULL) {
    printf("%d ", temp->value);
    temp = temp->next;
}
return 0;

    return 0;
}