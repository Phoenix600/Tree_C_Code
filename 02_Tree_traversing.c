#include<stdio.h>
#include<stdlib.h>

struct node
{
    int key;
    struct node* left;
    struct node* right;
};


// @createNode() to create node for tree
struct node* createNode(int key)
{
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	// Setting key and links to NULL
	newNode->key   = key;
	newNode->left  = NULL;
	newNode->right = NULL;
	// Returning a newNode, This can be root or any node in tree
	return newNode;
}

// @insertleft() to add node at left side of tree

struct node* insertLeft(struct node* root, int key)
{
	root->left  = createNode(key);
	return root->left;
}

struct node* insertRight(struct node* root, int key)
{
	root->right = createNode(key);
	return root->right;
}

// @inorder() function to travel the tree in manner of left-->root-->right
void inorder(struct node* root)
{
	if(root==NULL) return;
	inorder(root->left);
	printf("%d->",root->key);
	inorder(root->right);
}

void preorder(struct node* root)
{
	if(root==NULL) return ;
	printf("%d->",root->key);
	preorder(root->left);
	preorder(root->right);

}

void postorder(struct node* root)
{
	if(root==NULL) return;
	postorder(root->left);
	postorder(root->right);
	printf("%d->",root->key);
}

int main()
{
	struct node* root = createNode(1);
	
	insertLeft(root,12);
	insertRight(root,9);

	insertLeft(root->left,5);
	insertRight(root->left,6);

	insertLeft(root->left->left,10);
	insertRight(root->left->right,12);

	printf("[+]Inorder Traversal   : ");
	inorder(root);
	
	printf("\n[+]Prerder Traversal   : ");
	preorder(root);

	printf("\n[+]Postorder Traversal : ");
	postorder(root);
	return 0;
}
