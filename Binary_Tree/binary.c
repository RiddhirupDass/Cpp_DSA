#include<stdio.h>
#include<stdlib.h>

struct node{

    struct node* left;
    int data;
    struct node* right;
};

struct node* create_node(int data){
    struct node* p= (struct node*) malloc(sizeof(struct node));
    p->data = data; 
    p->left=p->right=NULL;
    return p;
}

int insert_node(struct node* root, int key){

    if(root==NULL){
        root= create_node(key);
    }
    else if(key>root->data){

        if(root->right==NULL){
            root->right=create_node(key);
            return 1;
        }

        insert_node(root->right, key);
        return 1;
    }

    else if(key<root->data){
        if(root->left==NULL){
            root->left=create_node(key);
            return 1;
        }

        insert_node(root->left, key);
        return 1;
    }

    return 0;
}

int main(){

    int data;
    printf("Please input root data: ");
    scanf("%d", &data);
    struct node* root= create_node(data);
    struct node* ptr=root;

    printf("Please input lesser node data: ");
    scanf("%d", &data);
    ptr->left= create_node(data);
    printf("Please input greater node data: ");
    scanf("%d", &data);
    ptr->right= create_node(data);

    ptr=ptr->left;
    printf("Please input lesser node data: ");
    scanf("%d", &data);
    ptr->left= create_node(data);
    printf("Please input greater node data: ");
    scanf("%d", &data);
    ptr->right= create_node(data);
    
    int key;
    printf("Please input key data: ");
    scanf("%d", &key);
    insert_node(root, key)?printf("Node inserted"):printf("Node not inserted");
    

    printf("\n%d", root->left->right->left->data);
    return 0;
}