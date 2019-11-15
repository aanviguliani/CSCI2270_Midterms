//
//  trees.cpp
//  
//
//  Created by Ria Thakkar on 10/8/18.
//

#include <stdio.h>

binary tree.
- each node has 0, 1, 2 children and 1 parent
create a hierachial structure
each node has three pointers.
- left child
- right children
- parent
pointers go to nodes of the same type.

   Denver - root (parent of the root is NULL)
    /\
   /  \
texas kansas

struct Node{
    string name;
    node *leftChild;
    node *rightChild;
    node *parent;
}

Denvers left child is texas
Denvers right child is kansas
texas' parent is denver.
where left of right child is NULL, thats the end of the branch of the tree.

Is there a path between nodes. Does the node exist in the tree.

each of subrtrees has same structure as main tree.
object is similar to a part of itsself.
recursive strcutre

void printNode(node *n){
    cout<<n->key<<endl;
    if(n->leftChild!=NULL){
        printNOde(n->leftChild);
        if(n->rightChild != NULL){
            printNOde(n->rightChild)
        }
    }
}

Rules for recursion:
1. Base Case:
smallest unit of the problem that can be defined.
2. rules to reduce all case to down to base case
ex: in print Node, rule is to call printNode of a nodes child.

BST where data is ordered.
0, 1, 2 children for every node.
BST, nodes to the left are less than the parent node.
nodes, to right are greater than or equal to that node.

all nodes in left branch of root are less than root value
branch to the right of the root, greater than or equal to the 5.

how do we construct tree?
We add nodes to the tree as we read them in.add

4, 2, 6, 9, 1, 3

4 - root.
4.left = 2
4.right = 6
6.right = 9
2.left = 1
2.right = 3

DEN, LA, CHI, VEGAS, SD, DET, NY

DEN - root
DEN.right = LA;
DEN.left = CHI
LA.right = VEGAS
VEGAS.left = SD
LA.left = DET
SD.left = NY

12, 16, 1, 14, 11, 30, 9, 18

12 root
12.right = 1



