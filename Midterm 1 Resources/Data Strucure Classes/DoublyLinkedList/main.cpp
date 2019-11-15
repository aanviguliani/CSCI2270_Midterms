#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(){
    LinkedList l = LinkedList();
    l.addNode(1, -1);
    l.addNode(2, 1);
    l.addNode(3, 2);
    l.addNode(4, 3);
    l.printList();
    l.deleteNode(4);
    l.printList();
}