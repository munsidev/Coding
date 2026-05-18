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
node* reverse(node *&head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    node *new_node=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return new_node;
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
    head=reverse(head);
    display(head);
    return 0;
}