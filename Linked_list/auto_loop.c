#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node* create_node(int n){

    int value;
    struct node *temp;
    struct node *post;
    struct node *head;

    for(int i=1; i<=n; i++){

        if(i==1){
            head= (struct node*) malloc(sizeof(struct node));
            post=head;
            printf("Please input data: ");
            scanf("%d", &value);
            head->data=value;
        }
        else{
            temp = (struct node*)malloc(sizeof(struct node));
            printf("Please input data: ");
            scanf("%d", &value);
            temp->data=value;
            post->link=temp;
            post=temp;
        }
    }
    temp->link=NULL;
    return head;
}

void print_node(struct node *head){
    struct node *temp=head;
    while(temp!=NULL){
        printf("\nNode data: %d", temp->data);
        temp=temp->link;
    }
}
int main(){

    int n, data;
    printf("Please input the number of nodes: ");
    scanf("%d", &n);
    struct node *head= create_node(n);

    printf("Data Input successful!\nPrinting data...\n");
    print_node(head);
    return 0; 
}