# Getting Started With Tree Data Structure

The tree is a non-linear hierarchical data structure where data is stored in a non-linear pattern or non-linear logical pattern.

The tree consists of nodes and edges, all nodes in the tree are connected via Edges

## Why Tree Data Structure

Other linear data structures like arrays, Linked lists, Queues, and Stacks store data sequentially, To perform any operations in a linear data structure, the time complexity increases as the size of data increases, and it's kinda not accepted in today's fast computational world.

Different Tree data structures allow quicker and easier access to the data as it is a non-linear data structure.

## Tree Terminologies

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

## Types Of Tree

  1. Binary Tree

    2. BInary Search Tree

    3. AVL Tree

    4. B-Tree

## Tree Applications

- Heap is a kind of tree that is used for heap sort.
  
- A modified version tree called Tries is used in the modern router to store routing information.
  
- Used in Databases (B-tree and T-Trees)
  
- Used in compilers to validate the syntax.
  

## Tree Node Code Snippet

This is how to define a node for a tree

```cpp
struct node {
    int key;
    struct node* left;
    struct node* right;
};
```

## Traverse Tree

There are 3 ways to traverse a tree :

1. Inorder
  
  1. In this traversing method left->root->right node visited
2. preorder
  
  1. In this traversing method root->left->right node visited
3. postorder
  
  1. In this traversing method left->right->root node visited

## Code Snippets

### Inorder Traversing

```cpp
void inorder(struct node* root)
{
    if(root==NULL) return;
    inorder(root->left);
    printf("%d->",root->key);
    inorder(root->right);

}
```

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
