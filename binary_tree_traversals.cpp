#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};


struct Node* newNode(int data)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return node;
}


void Inorder(struct Node* base)
{  
    if (base==NULL)
        return;
    
    Inorder(base->left);
    cout<<base->data;
    Inorder(base->right);
}


void Preorder(struct Node* base)
{  
    if (base==NULL)
        return;
    
    cout<<base->data;
    Preorder(base->left);
    Preorder(base->right);
}



void Postorder(struct Node* base)
{  
    if (base==NULL)
        return;
    
    Postorder(base->left);
    Postorder(base->right);
    cout<<base->data;
}


int main()
{
    struct Node* root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    root->right->left=newNode(6);
    Postorder(root);
    
    return 0;
}
