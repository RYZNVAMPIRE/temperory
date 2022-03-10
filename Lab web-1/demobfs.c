#include<stdio.h>
#include<stdlib.h>
struct node
{
    int key;
    struct node *left, *right;
};
struct node *createNode(int key)
{
struct node *newNode=(struct node *)malloc(sizeof(struct node ));
newNode->key=key;
newNode->left=newNode->right=NULL;
return newNode;
}
struct node *insert(struct node *root,int key)
{
    if(root==NULL)
    {
        return createNode(key);
        if(key<root->key)
        {
            root->left=insert(root->left,key);
        }
        else{
            root->right=insert(root->right,key);
        }

        }return root;
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        print("%d",root->key);
        inorder(root->right);
    }
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        print("%d",root->key);
    }
}

void preorder(struct node *root)
{
    if(root!=NULL)
    {
        preorder(root->left);
        print("%d",root->key);
        printf(root->right);
    }
}
struct node *minValueNode(struct node *node)
{
    struct node *current=node;
    while(current&&current->left!=0)
    {
        current=current->left;
    }
    return current;
}


