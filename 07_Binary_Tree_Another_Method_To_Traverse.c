#include<stdio.h>
#include<stdlib.h>

// struct Node type data structure for tree 
// The following Code is from @CodeWithHarry, 
// It contains all the steps to create tree and link its node

struct node 
{
	int key;
	struct node* right;
	struct node* left;
};


void inorder(struct node* root)
{
	if(root==NULL) return;
	inorder(root->left);
	printf("%d->",root->key);
	inorder(root->right);
}

int main()
{
	// Creating root of the tree 
	struct node* p0 = (struct node*)malloc(sizeof(struct node));

	// Setting data and links of root node
	p0->key   = 7;
	p0->left  = NULL;
	p0->right = NULL;

	// Creating Second Node in tree
	struct node* p1 = (struct node*)malloc(sizeof(struct node));
	// Setting key and link of second node in tree
	p1->key   = 1;
	p1->left  = NULL;
	p1->right = NULL;

	// Creating Third Node in Tree
	struct node* p2 = (struct node*)malloc(sizeof(struct node));
	// Setting key and edges in Third node in tree
	p2->key   = 3;
	p2->left  = NULL;
	p2->right = NULL;
	
	// Creating Fourth Node
	struct node* p3 = (struct node*)malloc(sizeof(struct node));
	// Setting key and edges 
	p3->key   = 0;
	p3->left  = NULL;
	p3->right = NULL;

	// Creating Fifth Node 
	struct node* p4 = (struct node*)malloc(sizeof(struct node));
	// Setting key and edges in tree initially
	p4->key   = 1;
	p4->left  = NULL;
	p4->right = NULL;

	// Creating sixth node in Tree
	struct node* p5 = (struct node*)malloc(sizeof(struct node));
	// Setting data and links 
	p5->key   = 4;
	p5->left  = NULL;
	p5->right = NULL;

	/*
	 *	############# LINK TREE IN THIS MANNER ###############
	 *		       
	 *		       7
	 *		      / \
	 *		     1 	 3
	 *		    /	/ \
	 *		   0	1  4	
	 *
	 *	[+]in0rder : 0->1->7->1->3->4
	 * */ 
	// Creating Tree Links 
	p0->left  = p1;
	p0->right = p2;
	p1->left  = p3;
	p2->left  = p4;
	p2->right = p5;
	inorder(p0);
	return 0;
}









