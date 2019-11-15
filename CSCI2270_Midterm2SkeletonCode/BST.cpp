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

void BST::destroyNode(node *currNode)
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
    destroyNode(root);
}

node* BST::createNode(int data)
{
    node* temp = new node;
    temp->key = data;
    temp->left =  NULL;
    temp->right = NULL;
    return temp;
}

node* BST::addNodeHelper(node *currNode, int data)
{
    if(currNode == NULL)
        return createNode(data);
    if(data < currNode->key)
        currNode->left = addNodeHelper(currNode->left,data);
    else if(data > currNode->key)
        currNode->right = addNodeHelper(currNode->right, data);

    return currNode;
}

void BST::addNode(int val)
{
    cout << "hello" << endl;
    node *newNode = addNodeHelper(newNode,val);
    cout << "added" << endl;
}


node* getMinVal(node* currNode){

    if(currNode->left == NULL){
        return currNode;
    }
    return getMinVal(currNode->left);
}

node* BST::deleteNodeHelper(node *currNode, int value)
{
    if(currNode == NULL)
    {
        return NULL;
    }
    else if(value < currNode->key)
    {
        currNode->left = deleteNodeHelper(currNode->left, value);
    }
    else if(value > currNode->key)
    {
        currNode->right = deleteNodeHelper(currNode->right, value);
    }
    else
    {
        if(currNode->left == NULL)
        {
            node* temp = currNode->right;
            delete(currNode);
            return temp;
        }
        else if(currNode->right == NULL)
        {
            node* temp = currNode->left;
            delete(currNode);
            return temp;
        }
        else
        {
            node* temp = getMinVal(currNode->right);
            currNode->key = temp->key;
            currNode->right = deleteNodeHelper(currNode->right,temp->key);
        }

    }
    return currNode;

}

void BST::deleteNode(int val)
{
    deleteNodeHelper(root,val);
}

node* BST::searchKeyHelper(node *currNode, int data)
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
    node* temp = searchKeyHelper(root,val);
    if(temp == NULL)
        return false;
    return true;
}

void BST::print2DUtilHelper(node *currNode, int space)
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

void BST::printTreeHelper(node *currNode)
{
    if (currNode == NULL)
        return;

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
}

void printLeftHelper(node *currNode)
{
    if(currNode == NULL)
        return;

    printLeftHelper(currNode->left);
    cout << currNode->key;
}

void printRightHelper(node *currNode)
{
    if(currNode == NULL)
        return;

    printLeftHelper(currNode->right);
    cout << currNode->key;
}

void BST::printRoof()
{
    printLeftHelper(root);
    printRightHelper(root);
}
