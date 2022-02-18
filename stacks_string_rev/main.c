#include <stdio.h>
#include <stdlib.h>
#define SIZE 20;

void pop(char);
void push();
void display();
int top=-1;
char str[SIZE];
int main()
{
    printf("Program to reverse string using stack\n");
    return 0;
}
void push(char value){
    if(top=SIZE-1){
        printf("Stack is empty");
    }
    else{
        top++;
        str[top]=value;
    }
}
void pop(){
top--;
printf("%c",str[top]);
}
