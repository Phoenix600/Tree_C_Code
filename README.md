# Getting Started With Tree Data Structure

The **tree** is a non-linear hierarchical data structure where data is stored in a non-linear pattern or non-linear logical pattern.

The tree consists of nodes and edges, all nodes in the tree are connected via Edges

# Why Tree Data Structure?

Other linear data structures like arrays, Linked lists, Queues, and Stacks store data sequentially, To perform any operations in a linear data structure, the time complexity increases as the size of data increases, and it's kinda not accepted in today's fast computational world.

Different Tree data structures allow quicker and easier access to the data as it is a non-linear data structure.

# Tree Terminologies

| Node | A node is an entity that contains a key or value and pointer to its child. |
| --- | --- |
| Leaf Node | The last nodes of each path are called leaf nodes or external nodes that do not contain link/pointer to child nodes. |
| Internal Node | The node having at least one child node is called an internal node. |
| Edge | It's a link between any two nodes. |
| root | It is the topmost node of the tree. |
| Height of node | Height of the node is the number of edges from the node to the deepest leaf (i.e the longest path from the node to a leaf node). |
| Depth of Node | The depth of the node is the number of edges from the root to a leaf node. |
| Height of a tree | The height of the tree is the height of the root node or the depth of the deepest node. |
| Degree of a node | The degree of a node is the total number of branches of that node |
| forest | A collection of the disjoint trees is called a forest |

![](https://www.delftstack.com/img/Python/structure%20of%20a%20tree%20in%20python.png?ezimgfmt=rs:372x210/rscb5/ng:webp/ngcb5)

# Types Of Tree

  1. Binary Tree

    2. BInary Search Tree

    3. AVL Tree

    4. B-Tree

# Tree Applications

- Heap is a kind of tree that is used for heap sort.
  
- A modified version tree called Tries is used in the modern router to store routing information.
  
- Used in Databases (B-tree and T-Trees)
  
- Used in compilers to validate the syntax.
  

# Tree Travesal

There are 3 ways to traverse a tree :

1. Inorder
  
  1. In this traversing method left->root->right node visited
2. preorder
  
  1. In this traversing method root->left->right node visited
3. postorder
  
  1. In this traversing method left->right->root node visited

## Code Snippets

### Create Node

````cpp
```cpp
struct node {
    int key;
    struct node* left;
    struct node* right;
};
````

````
### Inorder Traversing

```cpp
void inorder(struct node* root)
{
    if(root==NULL) return;
    inorder(root->left);
    printf("%d->",root->key);
    inorder(root->right);

}
````

### Preorder Traversing

```cpp
void preorder(struct node* root)
{
    if(root==NULL) return;
    printf("%d->",root->key);
    preorder(root->left);
    preorder(root->right);
}
```

### Postorder Traversing

```cpp
void postorder(struct node* root)
{
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d->",root->key);
}
```

# Types of Tree

## Binary Tree

A binary tree is a data structure in which each parent node can have at most two children.

Each node of binary tree consists of three items :

1. Data item
  
2. Address of the left child
  
3. Address of the right child
  

### Types of Binary Tree

1. Full Binary Tree
  
  - A full binary tree is a special type of binary tree in which every parent node/internal node has either two or no children.

2. Perfect Binary Tree
  
  - A perfect binary tree is a special type of tree in which every internal node has exactly two child nodes and all the leaf nodes are at the same level.
3. Complete Binary Tree
  
  A complete binary tree is just like a full binary tree, but with two major differences :
  
  - Every level must be completely filled
    
  - All the leaf elements must lean towards the left
    
  - The last leaf elements might not have a right siblings
    

4. Degenrate Tree or Pathological Tree
  
  -    Degenrate tree or pathological tree is the tree having a single child either left     or right.
5. Skewed Binary Tree
  
  - A skewed binary tree is pathological/degenerate tree in which the tree is either dominated by the left nodes or right nodes.
    
  - Thus there are two types of skewed binary tree
    
    - Left-skewed binary tree
      
    - right-skewed binary tree
      
6. Balanced Binary Tree
  
  - It's a type of binary tree in which the difference between the height of the left and the right subtree for each node is either 0 or 1

## Binary Tree Representation

A node of binary tree is represented by structure containing data part and two pointer to other strucutre of the same type.

```cpp
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
```

### Full Binary Tree

A full binary tree is a special type of binary tree in which parent node/ internal node has either two children or no children.

### Full Binary Tree Theorems

```cpp
int i = the number of internal nodes;
int n = be the total number of nodes;
int l = number of leaves 
int lev = total number of levels
```

The number of leaves                         :         i +1

The total number of nodes                 :        2i + 1

The total number internal nodes       :        (n-1) / 2

The number of leaves                           :        (n % 1 )/ 2

The total number of nodes                  :        2l-1

The number of internal nodes            :        l - 1

The numbr of leaves at most              :        2^(lev-1)
