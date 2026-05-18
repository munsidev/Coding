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
void insert(node*&head,int a){
    node *new_node=new node(a);
    node* temp=head;
    if(head==NULL){
        head=new_node;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }
}
void print_reverse(node *head){
    if(head==NULL){
        return ;
    }
    else{
        print_reverse(head->next);
    }
    cout<<head->value<<" ";
}
int main(){
    node* head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        insert(head,value);
    }
    print_reverse(head);
    return 0;
}