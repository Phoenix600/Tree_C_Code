#include<stdio.h>
#include<stdlib.h>

// Node modifed for tree data structure 
struct node {
	int key;
	struct node* left;
	struct node* right;
};

struct node* createNode(int key)
{
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	newNode->key   = key;
	newNode->left  = NULL;
	newNode->right = NULL;
	return newNode;
}
struct node* insertLeft(struct node* root, int key)
{
	struct node* temp = root;
	while(root->left != NULL)
	{
		root = root->left;
	}
	root->left = createNode(key);
	root = temp;
	return root;
}
struct node* insertRight(struct node* root, int key)
{
	struct node* temp = root;
	while(root->right != NULL)
	{
		root = root->right;
	}
	root->right = createNode(key);
	root = temp;
	return root;
}

void inorder(struct node* root)
{
	if(root == NULL) return;
	inorder(root->left);
	printf("%d->",root->key);
	inorder(root->right);
}



int main()
{
	struct node* root = createNode(12);
	//printf("%d",root->key);
	insertLeft(root,6);
	insertRight(root,3);
	inorder(root);
	return 0;
}
