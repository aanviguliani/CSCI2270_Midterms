#include <iostream>
using namespace std;

struct Node
{
    int value;       // no. of messages passed through this country
    Node *next;            // pointer to the next country
};
Node* head;

Node* searchNetwork(int intValue)
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

void insertNode(Node* previous, int intValue)
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

bool lengthIsEven(Node *head)
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

void deleteNode(int intValue)
{
    Node* temp = head;
    Node *previous;

    //if node to delete is at the head, free head
    if(temp != NULL && temp->value == intValue)
    {
        head = temp->next;
        free(temp);
        return;
    }

    //search through linked list and delete
    while(temp!=NULL && temp->value != intValue)
    {
        previous = temp;
        temp = temp->next;
    }

    if(temp==NULL)
    {
        return;
    }

    previous->next = temp->next;
    free(temp);
}

void deleteNegatives(Node* head)
{
    Node* temp = head;

    while(temp!=NULL)
    {
        //cout << temp->value << endl;
        //if node to delete is at the head, free head
        if(temp->value < 0)
        {
            cout << "deleting " << temp->value << endl;
            deleteNode(temp->value);
        }
        temp = temp->next;
    }


}

void printPath()
{
    Node *temp = head;
    cout << "== CURRENT PATH ==" << endl;

    while(temp!=NULL)
    {
        cout <<temp->value << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    cout << endl;
}


int main()
{

    insertNode(NULL,-3);
    insertNode(searchNetwork(-3),-1);
    insertNode(searchNetwork(-1),2);
    insertNode(searchNetwork(2),-4);

    if(lengthIsEven(head))
        cout << "even" << endl;
    else
        cout << "odd" << endl;
    cout << endl;

    deleteNegatives(head);
    printPath();
}
