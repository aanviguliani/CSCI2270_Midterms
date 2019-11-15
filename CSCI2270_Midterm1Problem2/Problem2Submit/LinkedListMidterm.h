
//class header to implement linked list
#ifndef CSCI2270_MIDTERM1_LINKEDLISTMIDTERM_H
#define CSCI2270_MIDTERM1_LINKEDLISTMIDTERM_H
#include <string>
using namespace std;
struct node{
    int key;
    node *next;
};
class LinkedListMidterm {
public:
    node *head; //variable for head node
    LinkedListMidterm(); //constructor that sets head to null
    void addNode(node*, int); //add node function
    node* searchNetwork(int intValue); //search network function
    void deleteNode(int); //delete node function
    int sumEvens(node* head); //sum evens function
    void printList(); //print list function
    void deleteEntireList(); //delete entire linked list
};


#endif //CSCI2270_MIDTERM1_LINKEDLISTMIDTERM_H
