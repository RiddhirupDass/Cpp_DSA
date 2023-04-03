#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define MAX_SIZE=7;



int main(){
    
    int num;
    int data;
    int stack[MAX_SIZE];
    int top;
    while(1){
    printf("Please input number: ");
    scanf("%d", &num);
    switch(num){
        case 1 : 
        printf("Input Data: ");
        scanf("%d", &data);
        push(data);
        break;

        case 2 :
        data=pop(data);
        printf("The value is: %d", data);
        break;

        case 3:
        data=peek(data);
        printf("The top value is: %d", data);
        break;

        case 4:
        exit(0);
    }
    }

    return 0;

}

bool is_full(){
    if(top==MAX_SIZE-1){
        return true;
    }
    else{
        return false;
    }
}
bool is_empty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}
void push(int data){
    if(!is_full()){
        top+=1;
        stack[top]=data;
    }
    else{
        printf("Stack is Full!!");
    }
}
int pop(int data){
    if(!is_empty()){
        data=stack[top];
        top-=1;
        return data;
    }
    else{
        printf("Stack is empty!!");
    }
}

int peek(int data){

    return stack[top];
}