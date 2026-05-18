#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node* root;
struct node* createnode(int data)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(!newnode){
        printf("memory error\n");
        return NULL;
    }
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}
void insert(int data){
    struct node* newnode = createnode(data);
    if(root==NULL){
        root=newnode;
        return;
    }
    struct node* current =root;
    struct node* parent = NULL;
    while(current!=NULL){
        parent = current;
        if(data<current->data){
            current=current->left;
        }else if(data>current->data){
            current = current->right;
        }else{
            printf("value %d already exist in the BST.\n");
            free(newnode);
        }
    }
    if(data<parent->data){
        parent->left=newnode;
    }else{
        parent->right=newnode;
    }
}
void inorder(struct node* node)
{
    if(node==NULL)
    return;
    inorder(node->left);
    printf("%d ",node->data);
    inorder(node->right);
}
int main()
{
     insert(50);
    insert(30);
    insert(70);
    insert(20);
    insert(40);
    insert(60);
    insert(80);

      printf("In-order Traversal of the BST: ");
    inorder(root);
    printf("\n");

    return 0;

}