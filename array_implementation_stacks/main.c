#include<stdio.h>
#include<conio.h>
#define SIZE 10

int stack[SIZE],top=-1;

void push(int);
void pop();
void display();

void main(){
    int value,choice;
    while(1){
        printf("\nENter your choice");
        scanf("%d",&choice);
        switch(choice){
        case 1:{
            printf("\nEnter the number to be pushed on to the stack:");
            scanf("%d",&value);
            push(value);
            break;
            }
            case 2:{
            printf("\nPop operation is being performed");
            pop();
            break;
            }
            case 3:{
            display();
            break;
            }
            case 4:{
            exit(0);
            }
        }
    }
}
void push(int value){
    if(top==SIZE-1){
        printf("\nStack is full");
    }
    else{
        top++;
        stack[top]=value;
        printf("\nInsertion successful");
    }
}

void pop(){
    if(top==-1){
        printf("\nStack is empty");
    }
    else{
        printf("\nDeleted element is %d",stack[top]);
        top--;
    }
}

void display(){
    for(int i=0;i<top;i++){
        printf("%d",stack[i]);
    }
}
