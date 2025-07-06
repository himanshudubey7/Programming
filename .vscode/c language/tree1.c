//author : Ghosty :D
#include<stdio.h>
#include<stdlib.h>

const int N = 1e5+10;
struct BstNode
{
    struct BstNode*left;
    int data;
    struct BstNode*right;


};
//function to create new node of BST
struct BstNode*getnewnode(struct BstNode*root, int data){
    struct BstNode* node = (struct BstNode*)malloc(sizeof(struct BstNode));
    node ->data = data;
    node->left = node-> right = NULL;
    return node;

}
struct BstNode*insert(struct BstNode*root, int data){
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
int search(struct BstNode*root , int value){
    if(root == NULL) return -1;
    else if(root->data == value) return 1;
    else if(root->data>=value) return search(root->left,value);
    else if(root->data<value) return search(root->right, value);
}

int main()
{

   struct BstNode*root = NULL;
   root = insert(root, 15);
   root  = insert(root, 10);
   root = insert(root, 20);
   root = insert(root, 25);
   root = insert(root, 8);
   root = insert(root, 12);
int number;
printf("Enter the number you want to search\n");
scanf("%d",&number);
if(search(root,number) == 1)
printf("Found!!\n");
else
printf("NOt found!!\n");
    

    
return 0;
}