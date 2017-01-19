#include<stdio.h>
#include<stdlib.h>

typedef struct node{
  int key;
  struct node *left, *right;
}tree;

tree *newNode(int item){
  tree *newnode = (tree* )malloc(sizeof(tree));
  newnode->key  = item;
  newnode->left = NULL;
  newnode->right = NULL;
  return newnode;
};

void inorder(tree *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->key);
        inorder(root->right);
    }
}

tree* insert(tree* node, int key){
  if(node==NULL){
    return newNode(key) ;
  }
  if(key <node->key){
    //printf("%d\n",key );
    node->left = insert(node->left,key);
  }
  if(key>node->key){
    node->right = insert(node->right,key);
  }
  //printf("%d\n",key );
  return node;
};
int main(){
  tree* root = NULL;
  root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    inorder(root);
    return 0;
}
