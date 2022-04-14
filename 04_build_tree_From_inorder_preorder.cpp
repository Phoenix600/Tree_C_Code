#include <bits/stdc++.h>
// Build the tree from the Preorder and Postorder
/*
PreOrder
1 2 3
Inorder
2 1 3
Algorithm :
1. Pick elements from preorder & create a node
2. Increment preorder index
3. Search for picked element's position in inorder
4. Call to build left subtree from inorder's 0 to pos-1
5. Call to build right subtree from inorder pos+1 to n
6. Return the node
*/
/*
Example :
    Preorder : 1 2 4 3 5 
               ^ 
               |            
    static index = 0; 
    
    Inorder  : 4 2 1 5 3
               ^       ^
               |       |
              start   End

    From these two order, build a tree
*/
int main()
{
    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};
    return 0;
}