#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

void print(struct node* head){
    struct node *ptr = head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}
int main(){

    struct node *head = malloc(sizeof(struct node));
    head->link=NULL;
    head->data=1;

    struct node *current = malloc(sizeof(struct node));
    current->link=NULL;
    current->data=0;
    head->link=current;

    current = malloc(sizeof(struct node));
    current->link=NULL;
    current->data=1;
    head->link->link=current;

    current = malloc(sizeof(struct node));
    current->link=NULL;
    current->data=2;
    head->link->link->link=current;
    print(head);
    return 0;
}