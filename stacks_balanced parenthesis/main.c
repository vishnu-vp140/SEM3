#include <stdio.h>
#include <stdlib.h>
#include<stdlib.h>

#define MAX 30
int top=-1;
int stack[MAX];

void push(char);
void pop();
int match(char a,char b);
int check(char[]);

int main(){
    char exp[MAX];
    int valid;
    printf("Enter an algebraic expression");
    gets(exp);
    valid=check(exp);
    if(valid==1){
        printf("Valid expression\n");
    }
    else{
        prntf("Invalid Expression");
    }
    return 0;
}

void push(char item){
if(top==(MAX-1)){
            prntf("Stack Overflow")
}
top++;
stack[top]=item;
}
char pop(){
if(top==-1){
    printf("Stack underflow");
    exit(1);
}
return(stack[top--]);
}
int check(char exp){
int i;
char temp;
for(int i=0;i<strlen(exp);i++){
    if(exp[i]=='(' || exp[i]== '{' || exp[i]==']'){
        push(exp[i]);
       }
    if()
}
}
