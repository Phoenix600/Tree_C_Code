#include<iostream>
#include<stdbool.h>
#include<stdlib.h>

// Creating node for the tree node
struct node{
	int key;
	struct node* right, *left;
};


// @createnode function will create the node, set the key , set all the left and right pointer to NULL
// And then return the node
struct node* createnode(int key)
{
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	newNode->key 	= key;
	newNode->left	= NULL;
	newNode->right  = NULL;
	return newNode;
}

/*
 * @insertLeft will insert node to the left of the parent node : 
 * Mechanism : 
 * 		1.Allocate the memory for the newNode using malloc
 * 		2.Set its location of the left of parent node 
 * 		3.return the node
 */
struct node* insertLeft(struct node* root, int key)
{
	root->left = createnode(key);
	return root->left;
}

// The below function follows same mechanism of @insertLeft 
struct node* insertRight(struct node* root,int key)
{
	root->right = createnode(key);
	return root->right;
}

// @insBinary will return the boolean in C to ensure the tree is Full-Binary-Tree or not 

bool isBinaryTree(struct node* root)
{
	// Checking tree or Subtree is empty or not 
	if(root == NULL) return true;
	// Checking the presence of the children 
	if(root->left == NULL && root->right == NULL) return true;
	//Checking the whole tree for the above 2 conditions 
	if((root->left) && (root->right)) return (isBinaryTree(root->left) && isBinaryTree(root->right));
	
	return false;

}

// @inorder function to traverse the tree leftSubTree -->root -->rightSubTree

void inorder(struct node* root)
{
	if(root==NULL) return;
	inorder(root->left);
	printf("%d->",root->key);
	inorder(root->right);
}

int main()
{
	struct node* root = createnode(1);
	
	// Subtree-01
	insertLeft(root,2);
	insertRight(root,3);
	// Subtree-02
	insertLeft(root->left,4);
	insertRight(root->left,5);

	// Displaying the tree
	inorder(root);
	return 0;
}
