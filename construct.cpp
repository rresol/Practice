#include<bits/stdc++.h>
using namespace std;
struct node{
  char data;
  struct node* right;
  struct node* left;
};
int search(char a[], int strt, int end, char value)
{
  int i;
  for(int i=strt; i<=end;i++)
  {
    if(arr[i]==value)
      return i;
  }
}
struct node* newNode(char data)
{
  struct node* treeNode = (struct node*) malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return node;
}
struct node* buildTree(char in[], char pre[], int inStrt, int inEnd)
{
  static int preIndex =0;
  if(inStrt>inEnd)
  {
    return NULL;
  }
  struct node* tnode = newNode(pre[preIndex++]);
  if(inStrt==inEnd)
    return tnode;
  int inIndex = search(in, inStrt, inEnd, tNode->data);
  tNode->left = buildTree(in,pre, inStrt, inIndex-1);
  tNode->right = buildTree(in, pre,  inIndex+1, inEnd);
  return tNode;
}

int main()
{
  char in[] = {'D', 'B', 'E', 'A', 'F', 'C'};
  char pre[] = {'A', 'B', 'D', 'E', 'C', 'F'};
  int len = sizeof(in)/sizeof(in[0]);
  struct node *root = buildTree(in, pre, 0, len - 1);

  /* Let us test the built tree by printing Insorder traversal */
  printf("Inorder traversal of the constructed tree is \n");
  printInorder(root);
  getchar();
}
