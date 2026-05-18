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
void insert(node *&head, int value){
    node *x=new node(value);
    x->next=head;
    head=x;
}
void display(node *head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
}
int main(){
    node* head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        insert(head,x);
    }
    display(head);
    return 0;
}