#include<iostream>
#include<stdlib.h>

/* 	Node for tree
 *  	Tree is a combination of : 
 *  		1. Node carrying data 
 *  		2. Two subtrees
*/


/*
 * There are three ways to traverse the Tree 
 * 	
 * 	1. inorder() : 
 * 		inorder(root->left)
 * 		display(root->data)
 * 		inorder(root->right)
 *
 * 	2. Preorder() :
 * 		display(root->data)
 * 		preorder(root->left)
 * 		preorder(root->right)
 * 	3. Postorder() :
 * 		postorder(root->left)
 * 		postorder(root->right)
 * 		display(root->data)
 * */

// Node for Tree
struct node {
	int key;
	struct node* left;
	struct node* right;
};

// To create a node for a tree, will use procedure oriented way
// This functiom is for creating Root node, Only we have other function to create the left and right subtree node

struct node* createNode(int key)
{
	// Creating New Node
	struct node* newNode = (struct node*)malloc(sizeof(struct node)); 
	// Setting Links and key of node
	newNode->key   = key;
	newNode->left  = NULL;
	newNode->right = NULL;

	return newNode;
}

// inserLeft() method to add node to the left of root , which will take root and newNode key as a parameter to add it to the left 
struct node* insertLeft(struct node* root, int key)
{
	root->left = createNode(key);
	return root->left;
}

// insertRight() method to add node to the right of the root, which will take root and newNode key as a Parameter 
// and return a newly created node which is placed to right of the root

struct node* insertRight(struct node* root, int key)
{
	root->right = createNode(key);
	return root->right;
}

// @inorder() Method to travel the Tree
// Left Subtree ---> Root ---> Right Subtree
void inorder(struct node* root)
{
	if(root==NULL) return;
	inorder(root->left);
	printf("%d->",root->key);
	inorder(root->right);

}

// @preoorder() metod traverse the tree  from root->left->right
void preorder(struct node* root)
{
	if(root==NULL) return;
	printf("%d->",root->key);
	preorder(root->left);
	preorder(root->right);
}
// @postorder() method traverse the tree from the left->right->root
void postorder(struct node* root)
{
	if(root==NULL) return;
	postorder(root->left);
	postorder(root->right);
	printf("%d->",root->key);
}

int main()
{
	// Creating root node using @createNode()
	struct node* root = createNode(1);	
	insertLeft(root,12);
	insertRight(root,9);

	insertLeft(root->left,5);
	insertRight(root->left,6);
	
	insertLeft(root->left->left,10);
	insertRight(root->left->right,12);

	printf("[+]Inorder Traverse : ");
	inorder(root);

	printf("\n[+]Preorder Traverse : ");
	preorder(root);

	printf("\n[+]Postorder Traverse : ");
	postorder(root);
	return 0;
}
