#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
void count(struct node *head){

    if(head==NULL){
        printf("The linked list is empty!");
    }
    struct node *ptr=head;
    int count=0;
    while(ptr!=NULL){
        count++;
        ptr=ptr->link;
    }
    printf("Number of nodes: %d", count);
}
void print(struct node *head){
    if(head==0){
        printf("The linked list is empty!");
    }
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("\n%d",ptr->data);
        ptr=ptr->link;
    }
}
struct node* insert_mid(struct node *head, int value, int pos){
    struct node *rtp=malloc(sizeof(struct node));
    rtp->data=value;
    int count=1;
    struct node* ptr=head;
    while(count!=pos){
        count+=1;
        ptr=ptr->link;
    }
        rtp->link=ptr->link;
        ptr->link=rtp;
    return head;
    
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

    int value, pos;
    printf("Please input value: ");
    scanf("%d",&value);
    printf("Please input pos: ");
    scanf("%d",&pos);
    head = insert_mid(head, value, pos);
    
    print(head);
    return 0;
}