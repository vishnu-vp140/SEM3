#include<stdio.h>
#include<stdlib.h>
#define S 10
int dequeue[S];
int l=-1,r=-1;
void insert_right(){
    int val;
    scanf("%d",&val);
    if((l==0&&r==S-1)||(l==r+1))
        printf("Overflow");
    if(l==-1){
            l=0;
            r=0;

    }
    else{
        if(r==S-1)
            r=0;
        else
            r++;
        dequeue[r]=val;
    }
}
void insert_left(){
    int val;
    scanf("%d",&val);
    if((l==0 && r=S-1)||(l=r+1))
        printf("Overflow");
    else{
        if(l==-1){
            l=0;
            r=0;
        }
        else{
            if(l==0)
                l=S-1;
        }
        l--;
        dequeue[l]=val;
    }
}

void delete_right(){
    if(l==-1)
        printf("\nQueue underflow");
        if(r==l){
            l=-1;
            r=-1;
        }
        else{
            if(r==0){
                r=S-1;
            }
            else
                r--;
        }
    }

void delete_left(){
    if(l==-1){
        printf("\nUnderflow");
    }
    if(l==r){
        l=-1;
        r=-1;
    }
    else{
        if(l==S-1)
            l=0;
        else
            l++;
    }

}
