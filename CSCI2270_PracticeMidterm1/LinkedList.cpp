#include "LinkedList.hpp"
#include <iostream>
using namespace std;

Node* LinkedList::searchNetwork(int intValue)
{
    Node* current = head;
    while(current != NULL)
    {
        if(current->value==intValue)
        {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

void LinkedList::insertNode(Node* previous, int intValue)
{
    //cout << "in function" << endl;
    Node *current = new Node;
    current->value = intValue;

    if(previous==NULL)
    {
        current->next = head;
        head = current;
        cout << "adding: " << intValue << " (HEAD)" << endl;
        return;
    }
    current->next = previous->next;
    previous->next = current;
    cout << "adding: " << intValue << " (prev: " << previous->value << ")" << endl;
}

Node* LinkedList::returnHead()
{
    Node* temp = head;
    return temp;
}

bool LinkedList::lengthIsEven(Node *head)
{
    int count = 0;
    Node* temp = head;
    while(temp!= NULL)
    {
        count++;
        temp = temp->next;
    }

    if(count%2==0)
        return true;
    else
        return false;
}


