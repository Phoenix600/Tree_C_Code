#include<stdio.h>
#include<stdlib.h>

/* 
 Node user defined data-type for Tree
 The following data structure contains key, struct node type pointer variable which will point to the variable of type struct node
 < struct node > type
*/
struct node
{
	int key;
	struct node* left;
	struct node* right;
};

/*
 
[FUNC]     Name of function : 			@createNode(<int var>) 

[MANUAL]   Description	    : 			function creates and return the node to the root struct node* type pointer			  
					  	createNode(int key) function takes only one parameter as <int type> and allocates 
			 		  	memory for the newNode to set the key and by initially it sets left and right
			 		  	pointer of node to NULL.
*/
// @createNode()
struct node* createNode(int key)
{
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	newNode->key   = key;
	newNode->left  = NULL;
	newNode->right = NULL;
	return newNode;
}

/*
 [FUNC]		Name of Function :		@insertLeft( <struct node* var> , <int var> )
 
 [MANUAL]	Decsription      : 		This function takes struct node* type var and key <type int > to add it on the
 						left side of the node passed, it allocate memory by defininf new variable of 
						type struct node* and calls function and pass key to @createNode and then it
						return newly created var i.e 'node->left' node ( or recently added node).
  */
//@inserLeft(struct node* root, int key)
struct node* insertLeft(struct node* root, int key)
{
	root->left = createNode(key);
	return root->left;
}


/*	@insertRigth(struct node* root, int key)      
	This functin is same as @insertLeft(Refer @insertLeft for more information) it just add newNode at right side of parent 
	node or root node
*/
struct node* insertRight(struct node* root, int key)
{
	root->right = createNode(key);
	return root->right;
}

/*
 There are three ways to traverse the tree 
 	1. Inorder() Traversal 
	2. preorder() Traversal
	3. postorder() Traversal

 */
/*
 [FUNC]			Name of Function  :	<void> @inorder(struct node* <root or head>)				
 
 [MANUAL]               Description       :	This is one of the optimised way of traversing the tree. It uses the recursion
 						mechanism and at cartain point it reaches the base condtiton,then stack functions
						starts returning the value or aka backtracking 
						Elements are traversed in left->(root->data)->right manner.
 */
// @inorder() 
void inorder(struct node* root)
{
	// base condition
	if(root==NULL) return;
	inorder(root->left);
	printf("%d->",root->key);
	inorder(root->right);
}

/*
 [FUNC]			Name of Function  :	<void> @preorder(struct node* <root or head>)

 [MANUAL]		Description	  :	Another way to tarverse the tree. It uses also uses the reursion mechanism.
 						Elements are tarversed in (root->data)-->left-->right
 */
// @preorder()
void preorder(struct node* root)
{
	//base condtiton
	if(root==NULL) return;
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
	
	insertLeft(root->right,10);
	insertRight(root->right,11);
	
	printf("[+]Inorder       : ");
	inorder(root);

	printf("\n[+]Preorder      : ");
	preorder(root);

	printf("\n[+]Podtorder     : ");
	postorder(root);
	return 0;
}
