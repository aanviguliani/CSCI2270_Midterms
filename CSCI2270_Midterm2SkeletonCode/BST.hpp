/*
Starter HPP File for BST.
DISCLAIMER: We recommend everyone to at least have these functions implemented properly.

For the exams the variable type might change form int to char / any other custom type.
You will also have extra functions which will be the main exam problems. These will just be added to this hpp file and it will be given to you during your exam
*/

#ifndef BST_HPP
#define BST_HPP

#include <iostream>
using namespace std;

// Struct for a tree node
struct node{
    int key; // data to be stored in the node
    node* left = NULL; // pointer to the leftchild node
    node* right = NULL; // pointer to the rightchild node
};

class BST{
    private:
        /*
        Method Name: createNode
        Purpose: Create a node with key as 'data'
        return: pointer to the new node
        */
        node* createNode(int data);
        node* root; // pointer to the root of the BST

        /** since root is a private member we need helper functions
         to access root for insertion, searching and printing **/

        /*
        Method Name: addNodeHelper
        Purpose: This function will add a node with key as 'data' in the tree rooted at 'currNode'.
        Call this function from addNode().
        return: currNode
        */
        node* addNodeHelper(node* currNode, int data);

        /*
        Method Name: deleteNodeHelper
        Purpose: This function deletes the node with 'value' as it's key from the tree rooted at 'currNode'.
        Call this function from deleteNode()
        return: currNode
        */
        node* deleteNodeHelper(node *currNode, int value);

        /*
        Method Name: searchKeyHelper
        Purpose: This function will search for a node with "data" as it's key in a tree rooted at 'currNode'.
        Call this function from searchKey()
        return: Node with "data" as it's key if found, otherwise NULL
        */
        node* searchKeyHelper(node* currNode, int data);

        /*
        Method Name: printTreeHelper
        Purpose: This function will traverse the tree rooted at "currNode" in an inorder fashion and print out the node elements.
        Call this function from printTree()
        return: none
        */
        void printTreeHelper(node* currNode);

        /* OPTIONAL (this is to help in visualizing the tree)
        Method Name: print2DUtilHelper
        Purpose: Prints the tree rooted at 'currNode' in a 2D fashion. Refer to the recitation writeup for this funciton
        Call this function from print2DUtil().
        return: none
        */
        void print2DUtilHelper(node *currNode, int space);

        /*
        Method Name: destroyNode
        Purpose: This function will destroy the tree rooted at 'currNode'.
        Destructor will call this function to recursively delete all nodes
        return: none
        */
        void destroyNode(node *currNode);
        void printRoof(); //print roof of BST

    public:

        // function to insert a node in the tree. This function calls the addNodeHelper()
        void addNode(int);

        // function to delete a node in the tree. This function calls the deleteNodeHelper()
        void deleteNode(int);

        // function to search a data in the tree. This function calls the searchKeyHelper()
        // returns True if it exists otherwise False
        bool searchKey(int);

        // function to print the tree (in an inorder fashion). This function calls the printTreeHelper()
        void printTree();

        /*
      	constructor
      	Purpose: perform all operations necessary to instantiate a class object
      	return: none
      	*/

        // default constructor
        BST();

        // parameterized constructor. It will create the root and put the 'data' in the root
        BST(int data);

        /*
      	destructor
      	Purpose: free all resources that the object has acquired
      	return: none
      	*/

        // This calls the destroyNode().
        ~BST();

        // Prints the tree in a 2D fashion. This function calls print2DUtilHelper().
        void print2DUtil(int space);


};
#endif
