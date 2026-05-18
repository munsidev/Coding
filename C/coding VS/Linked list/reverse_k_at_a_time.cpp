#include<iostream>
using namespace std;
class node{
    public:
    int value;
    node* next;
    node(int a){
        value=a;
        next=NULL;
    }
};
node* reverse(node *&head,int k){
    node* previous=NULL;
    node* current=head;
    int count=0;
    while(current!=NULL && count<k){
        node* nextPtr=current->next;
        current->next=previous;
        previous=current;
        current=nextPtr;
        count++;
    }
    if(current!=NULL){
        node* new_head=reverse(current,k);
        head->next=new_head;
    }
    return previous;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}
int main(){
    node* head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    head->next->next->next->next=new node(5);
    display(head);
    cout<<endl;
    head=reverse(head,2);
    display(head);
    return 0;
}