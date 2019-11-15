#include <iostream>
#include "BST.hpp"

using namespace std;


int main()
{
    BST b1 = BST();
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    b1.addNode(a);
    b1.addNode(b);
    b1.addNode(c);
    b1.addNode(12);
    b1.printTree();
    cout << endl;
    cout << b1.sumRange(0,3) << endl;
}