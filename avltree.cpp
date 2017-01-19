#include<stdio.h>
#include<stdlib.h>


struct node{
	int key;
	struct node* left, *right;
	int height;
};

struct node* getNode(int key)
{
	struct node* newNode = (node*)malloc(sizeof(node));
	newNode->key = key;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->height = 0;
}

int max(int a, int b)
{
	return a<b?a:b;
}

int height(struct node*root)
{
	return root->height;
}

struct node* rightRotate(struct node* y)
{
	struct node* x  = y->left;
	struct node* T2 = x->right;
	x->right = y;
	y->left = T2;
	return x;
}

struct node* leftRotate(struct node* x)
{
	struct node* y  = x->left;
	struct node* T2 = y->right;
	y->right = x;
	x->left = T2;
	return y;
}

