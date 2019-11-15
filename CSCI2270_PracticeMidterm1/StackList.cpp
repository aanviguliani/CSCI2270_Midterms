//basic code to implement a stack via linked list
#include <iostream>
using namespace std;

struct Node
{
    char key;
    Node *next;
};
Node* head;

bool isEmpty()
{
    return(head==nullptr);
}

void push(char key)
{
    Node* nn = new Node; //create new node dynamically
    nn->key = key; // assign key value from parameter
    nn->next = nullptr; //make next node point to null
    nn->next = head; //make next node point to head
    head = nn; //make new node the head
}

void pop() //pop function deletes the head of the stack
{
    if(!isEmpty())
    {
        Node* temp = head; //make temporary variable and assign to head
        head = head->next; // make next value point to head
        delete temp; // delete temp head
    }
    else
    {
        cout<<"empty stack. can not pop"<<endl;
    }
}

char peek() //returns value of data that is stored in the head node
{
    if(!isEmpty())
        return head->key;
    else{
        cout<<"empty stack. can not peek"<<endl;
        return -1;
    }
    //return 0;
}

