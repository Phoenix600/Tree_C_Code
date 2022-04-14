#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

// The reason behind adding #include<stdbool.h> is, it allows you to use 'bool' as a 
// boolean type true as 1 and false as 0
/*
 	EX. 
	bool x = true;
	bool y = false;

	if you print the value of x , it will show you '1'
	and if you try with value of y it will be shown as '0'
 * */

// @struct node data struture for tree data structure 
struct node
{
	int key;
	struct node *left, *right;
};

// @createnode function to create newNode and return it to the root node
struct node* createNode(int key)
{
	// Allocating memory for the newNode in heap which is pointed by 
	// struct node* newNode from stack to heap
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	// Setting Data and Links to NULL, initially
	newNode->key 	= key;
	//newNode->left 	= NULL;
	//newNode->right  = NULL;
	// There is kinda other way to do the same shit ; )
	newNode->left = newNode->right = NULL;
	//Now finally return the node
	return newNode;
}

bool isFullBinaryTree(struct node *root)
{
	// Checking if the Tree empty then return  
	if(root==NULL) return true;
	if(root->left == NULL && root->right == NULL) return true;
	if((root->left) && (root->right)) return (isFullBinaryTree(root->left) && isFullBinaryTree(root->right));
	return false;
}




int main()
{
	struct node* root = NULL;
	root = createNode(1);
	
	root->left  = createNode(2);
	root->right = createNode(3);

	root->left->left  = createNode(4);
	root->left->right = createNode(5);

	root->right->left  = createNode(6);
	root->right->right = createNode(7);

	if(isFullBinaryTree(root))
	{
		printf("The tree is full binary Tree");
	}else{
		printf("The tree is not ful Binary Tree");
	}
	return 0;
}
