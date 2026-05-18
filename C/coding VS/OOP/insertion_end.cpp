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
void insert(int a){
    node *new_node=new node(a);
}
void display(){

}
int main(){
    insert(2);
    insert(4);
    display();
    return 0;
}