//author : Ghosty :D
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left;
    struct node*right;

};

void preorder(struct node*root){
    if(root == NULL) return;
    printf("%d\t",root->data);
    preorder(root->left);
    preorder(root->right);

}

void inorder(struct node*root){
    if(root == NULL)return;
    inorder(root->left);
    printf("%d\t", root->data);
    inorder(root->right);
}
void postorder(struct node*root){
    if(root == NULL)return;
    postorder(root->right);
    postorder(root->left);
    printf("%d\t", root->data);
}
//function to create new node of BST
struct node*getnewnode(struct node*root, int data){
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node ->data = data;
    node->left = node-> right = NULL;
    return node;

}
struct node*insert(struct node*root, int data){
    if(root == NULL){
        root = getnewnode(root, data);
        
    }
    else if(data<= root->data){
        root->left= insert(root->left, data);
    }
    else{
        root->right = insert(root->right, data);
    }
    return root;
}

const int N = 1e5+10;
int main()
{   struct node*root = NULL;
   root = insert(root, 15);
   root  = insert(root, 10);
   root = insert(root, 20);
   root = insert(root, 25);
   root = insert(root, 8);
   root = insert(root, 12);
   printf("the preorder traversal \n");
   preorder(root);
   printf("\n");
   printf("the inorder traversal \n");
   inorder(root);
   printf("\n");
   printf("the postorder traversal\n");
   postorder(root);

return 0;
}