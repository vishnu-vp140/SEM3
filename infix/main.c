#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#define MAX 50
int top=-1,stack[MAX];

void push(char elem){
        if(top==-1){
            printf("\n Stack Overflow");
        }
        else{
            stack[top++]=elem;
        }
}

char pop(){
    if(top==MAX-1){
        printf("\n Stack Underflow");
    }
    else{
        int popele=top-1;
        return popele;
    }
}

int priority(char symbol){
    if(symbol=='^'){
        return 3;
    }
    else if(symbol=='*'|| symbol=='/'){
        return 2;
    }
    else if(symbol='+'||symbol=='-'){
        return 1;
    }
    else{
        return 0;
    }

}

int main()
{
    char infix[50],postfix[50],ch,elem;
    int i=0,k=0;
    scanf("%s",&infix);
    push('#');
    while((ch=infix[i])!='\0'){
            if(ch=='('){
                push(ch);
               }
            else if(isalnum(ch)){
                postfix[k++]=ch;
            }
            else if(ch==')'){
                while(stack[top]!='(')
                {
                    postfix[k++]=pop();
                    elem=pop();
                }
            }
            else{
                if(priority(stack[top])>=priority(ch)){
                    postfix[k++]=pop();
                    push(ch);
                }
            }
            i++;
    }
    while(stack[top]!='#'){
        postfix[k]='\0';
    }
    printf("Postfix Expression:%s",&postfix);
    return 0;
}
