#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;

typedef struct Tree{
  int data;
  struct Tree* left;
  struct Tree* right;
  int liss =0;
}node;

node* newNode(int data){
  node* newnode = (node* )malloc(sizeof(node));
  newnode->data = data;
  newnode->right = NULL;
  newnode->left = NULL;
  return newnode;
}

int bottomUp(node* root)
{
  if(!root)
    return 0;

  if(root->liss)
    return root->liss;

  int size_excluding_root = bottomUp(root->left) + bottomUp(root->right);
  int size_including_root =1;
  if(root->left)
    size_including_root += bottomUp(root->left->left) + bottomUp(root->left->right);
  if(root->right)
    size_including_root += bottomUp(root->right->left) + bottomUp(root->right->right);

  root->liss = max(size_including_root,size_excluding_root);
  return root->liss;
}

int LISS(node* root)
{
  if(!root)
    return 0;

  int size_excluding_root = LISS(root->left) + LISS(root->right);
  int size_including_root = 1;
  if(root->left)
    size_including_root += LISS(root->left->left) + LISS(root->left->right);
  if(root->right)
    size_including_root += LISS(root->right->left) + LISS(root->right->right);

  return max(size_including_root,size_excluding_root);
}

int main()
{
    node *root         = newNode(20);
    root->left                = newNode(8);
    root->left->left          = newNode(4);
    root->left->right         = newNode(12);
    root->left->right->left   = newNode(10);
    root->left->right->right  = newNode(14);
    root->right               = newNode(22);
    root->right->right        = newNode(25);

    printf ("Size of the Largest Independent Set is %d ", bottomUp(root));

    return 0;
}
