#include <iostream>
#include "BST.hpp"
#define COUNT 10

using namespace std;

BST::BST()
{
    root = NULL;
}

BST::BST(int data)
{
    root->key = data;
    root->left = NULL;
    root->right = NULL;
}

void BST::destroyNode(Node *currNode)
{
    if(currNode == NULL)
        return;
    else
    {
        destroyNode(currNode->left);
        destroyNode(currNode->right);
    }
    cout << "deleting node " << currNode->key << endl;
    free(currNode);
}

BST::~BST()
{

}

Node* BST::addNodeHelper(Node *currNode, int data)
{

}

void BST::addNode(int val)
{
   Node* temp = root;
   Node* n = new Node;
   Node* parent = new Node;
   n->key = val;
   n->parent = NULL;
   n->left = NULL;
   n->right = NULL;

   if(temp == NULL)
   {
       root = n;
       return;
   }

   while(temp!=NULL)
   {
       parent = temp;
       if(n->key < temp->key)
       {
           temp = temp->left;
       } else{
           temp = temp->right;
       }
   }
   if(parent == NULL)
   {
       root = n;
   }
   else if(n->key < parent->key)
   {
       parent->left = n;
       n->parent = parent;
   } else{
       parent->right = n;
       n->parent = parent;
   }
}


Node* getMinVal(Node* currNode){

    if(currNode->left == NULL){
        return currNode;
    }
    return getMinVal(currNode->left);
}

Node* BST::deleteNodeHelper(Node *currNode, int value)
{

}

void BST::deleteNode(int val)
{
    //deleteNodeHelper(root,val);
}

Node* BST::searchKeyHelper(Node *currNode, int data)
{
    if (currNode == NULL || currNode->key == data)
        return currNode;
    if(currNode->key < data)
        return searchKeyHelper(currNode->right,data);
    if(currNode->key > data)
        return searchKeyHelper(currNode->left,data);
}

bool BST::searchKey(int val)
{
    Node* temp = searchKeyHelper(root,val);
    if(temp == NULL)
        return false;
    return true;
}

void BST::print2DUtilHelper(Node *currNode, int space)
{
    // Base case
    if (root == NULL)
        return;

    // Increase distance between levels
    space += COUNT;

    // Process right child first
    print2DUtilHelper(root->right, space);

    // Print current node after space
    // count
    printf("\n");
    for (int i = COUNT; i < space; i++)
        printf(" ");
    printf("%d\n", root->key);

    // Process left child
    print2DUtilHelper(root->left, space);
}

void BST::print2DUtil(int space)
{
    print2DUtilHelper(root,space);
}

void BST::printTreeHelper(Node *currNode)
{
    if (currNode == NULL)
    {
        //cout << "empty tree" << endl;
        return;
    }

    /* first recur on left child */
    printTreeHelper(currNode->left);

    /* then print the data of node */
    cout << currNode->key << " ";

    /* now recur on right child */
    printTreeHelper(currNode->right);
}

void BST::printTree()
{
    printTreeHelper(root);
    cout << endl;
}

int sumRangeRecursive(Node* currNode, int min,int max)
{
    if(currNode == NULL)
    {
        return 0;
    }
    if(currNode->key >= min && currNode->key <= max)
    {
        return(currNode->key + sumRangeRecursive(currNode->left,min,max) + sumRangeRecursive(currNode->right,min,max));
    }
}

int BST::sumRange(int min, int max)
{
    int sum = 0;
    sum = sumRangeRecursive(root,min,max);
    return sum;
}