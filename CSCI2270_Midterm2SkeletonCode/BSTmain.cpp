#include <iostream>
#include "BST.hpp"

using namespace std;

int main()
{
    BST b1 = BST();
    b1.addNode(1);
    b1.addNode(5);
    b1.addNode(7);
    b1.addNode(2);

    b1.printTree();
    b1.deleteNode(1);
    b1.printTree();
}
