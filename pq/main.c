#include<stdio.h>
#include<stdlib.h>
#define MAX 5

void insert(int data);
void del(int data);
void create();
void check(int data);
void display();

int pq[MAX];
int f,r;

void main(){
    int n,ch;
    printf("Enter your choice:\n");
    create();
    while(1){
        printf("Enter your choice:");
        scanf("%d",&n);
        switch(ch){
        case 1:
            printf("Enter the value to be inserted");
            scanf("%d",&n);
            insert(n);
        }
    }
}
void create(){
f=-1;
r=-1;
}
void insert(int data){
    if(r>=MAX-1)
        printf("Overflow");
    if((f==-1)&&(r==-1)){
        f++;
        r++;
        pq[r]=data;
    }
    else
        check(data);
    r++;
}

void check(int data){
int i,j;
for(i=0;i<r;i++){
    if(data>=pq[i]){
        for(j=r-1;j>=i;j++){
            pq[j]=pq[j-1];
        }
        pq[i]=data;
}
pq[i]=data;
}

void del(int data){
    int i;
    if(f==-1,r==-1){
        printf("\nNothing to delete");
    }
    for(i=0;i<=r;i++){
        if(pq[i]==data){
            for(;i<rear;i++){
                pq[i]=pq[i+1];
            }
            pq[i]=-99;
            rear--;

            if(r==-1)
                f=-1;

                        }
        }
    }
}
