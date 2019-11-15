//basic code to implement Queue via LL
#include <iostream>
using namespace std;

struct Node
{
    int key;
    Node *next;
};
// item in list to be dequeued next
Node* queueFront;
// item in list that was most recently enqueued
Node* queueEnd;

bool isEmpty() // returns if queue is empty
{
    return (!queueFront || !queueEnd);
}

void enqueue(int keyVal)
{
    Node* nn = new Node; //create new node
    nn->key = keyVal; //assign key of new node to function input parameter
    nn->next = nullptr; //make next point to null

    //adding it to the queue
    if(isEmpty())
        queueFront = nn; //assign new node to head of the queue
    else
        queueEnd->next = nn; //assign it to the end of the queue
    queueEnd = nn; //make new node the end of the queue
}

void dequeue() //take the front of the queue and remove it
{
    if(!isEmpty())
    {
        Node* temp = new Node; // create new node dynamically
        temp = queueFront; //assign temp to the front of the queue
        queueFront = queueFront->next;  //move the next node up to the front of the queue
        delete temp;
    }
    else
        cout << "err queue empty" << endl;
}

int peek()
{
    if(!isEmpty())
        return queueFront->key;
    else
        cout << "err queue empty" << endl;
}

//traversing through queue


