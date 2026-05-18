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
void display(node *head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head=NULL;
    node(4);
    node(7);
    display(head);
    return 0;
}