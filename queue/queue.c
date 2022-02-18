#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int queue[MAX];
int front=-1,rear=-1;

void insert(){
    int add_item;
    if(rear==MAX-1){
        printf("\nQueue Overflow");
    }
    else{
        if(front==-1)
            front=0;
        printf("\nEnter the value to be inserted:\n");
        scanf("%d",&add_item);
         rear = rear + 1;
        queue[rear] = add_item;
}
}

void del(){
    if(front==-1||front>rear)
        printf("\nQueue underflow");
    else{
        printf("\ndeleted element is %d",queue[front]);
        front++;
    }
}

void display(){
    printf("\nThe Queue contains of the following elements:");
    for(int i=front;i<=rear;i++){
        printf("%d\n",queue[i]);
    }
}

int main(){
    while(1){
    int choice;
    printf("\n1.Insert\n2.Delete\n3.display\n4.exit");
    printf("\nEnter your choice");
    scanf("%d",&choice);
        switch(choice){
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            printf("Wrong choice entered\n\n");
        }
    }
}
