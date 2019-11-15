//
// Created by Ria Thakkar on 10/15/18.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

#include <string>
using namespace std;
struct node{
    int key;
    node *next;
    node *previous;
    node(int k, node *n, node *p){
        key = k;
        next = n;
        previous = p;
    }
};
class LinkedList {
public:
    node *head;
    LinkedList();
    void addNode(int, int);
    void deleteNode(int);
    void printList();
};


#endif //LINKEDLIST_LINKEDLIST_H
