#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    node left;
    node right;
    int data;
}*node

node getnode(int item)
{
    node temp;
    temp=(node)malloc(sizeof(struct node));
    item=temp->data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

node insert(node root,int ele)
{
    if(root==NULL)
        getnode(ele);
    else if(ele<root->data)
        root->left=insert(root,ele);
    else if(ele>root->data)
        root->right=nsert(root,ele);
    return root;
}

void inorder(node root)
{
    if(root=NULL)
        return;
    inorder(root->left);
    printf("%d",root->data);
     inorder(root->right);

}
void preorder(node root)
{
    if(root=NULL)
        return;
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(node root)
{
     if(root=NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);

}
int main()
{
    node root = NULL;
    int e, ch = 1;

    while (ch != 5)
    {
        printf("\n\n1.Insert\n2.PreOrder\n3.InOrder\n4.PostOrder\n");
        printf("5.Exit\n");
        scanf("%d", &ch);
        printf("\n");

        switch (ch)
        {
        case 1:
            printf("Element:");
            scanf("%d", &e);
            root = insert(root, e);
            break;

        case 2:
            preorder(root);
            break;

        case 3:
            inorder(root);
            break;

        case 4:
            postorder(root);
            break;

        case 5:
            printf("Exiting.");
            exit(1);

        default:
            printf("Wrong input!");
        }
    }
}

