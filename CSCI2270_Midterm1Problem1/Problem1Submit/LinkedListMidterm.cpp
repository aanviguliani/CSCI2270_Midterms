#include "LinkedListMidterm.h"
#include <iostream>
#include <stddef.h>
using namespace std;

//constructor: sets head to null
LinkedListMidterm::LinkedListMidterm()
{
    head = NULL;
}

//returns node at which value parameter is located
node* LinkedListMidterm::searchNetwork(int intValue)
{
    node* current = head;
    while(current != NULL)
    {
        //if value is at this node, return node
        if(current->key==intValue)
        {
            return current;
        }
        //else, go to the next node
        current = current->next;
    }
    //if not found, return null
    return NULL;
}

//add node function
void LinkedListMidterm::addNode(node* previous, int intValue)
{
    //declare vars
    node *current = new node;
    current->key = intValue;

    //if previous is null, add value to the head node
    if(previous==NULL)
    {
        current->next = head;
        head = current;
        cout << "adding: " << intValue << " (HEAD)" << endl;
        return;
    }
    //else, add to the middle of the linked list
    current->next = previous->next;
    previous->next = current;
    cout << "adding: " << intValue << " (prev: " << previous->key << ")" << endl;
}

//delete node function
void LinkedListMidterm::deleteNode(int intValue)
{
    node* temp = head;
    node *previous;
    //if node to delete is at the head, free head
    if(temp != NULL && temp->key == intValue)
    {
        head = temp->next;
        free(temp);
        return;
    }
    //search through linked list and delete
    while(temp!=NULL && temp->key != intValue)
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

//sum evens function
int LinkedListMidterm::sumEvens(node* head)
{
    node* temp = head;
    int sum = 0;

    while(temp!=NULL)
    {
        //if remainder of key at node temp divided by two is zero (if even), add it to the sum
        if(temp->key % 2 == 0)
        {
            sum = sum + temp->key;
        }
        temp = temp->next;
    }

    return sum;
}

//print list function: iterate through linked list and print values as long as head isn't equal to null. if head equals null, print empty list
void LinkedListMidterm::printList() {
    if(head == NULL){
        cout<<"empty list"<<endl;
        return;
    }
    cout << "Path for linked list is: " << endl;
    node *current = head;
    while(current != NULL){
        cout<<current->key<< " ";
        current=current->next;
    }
    cout << endl;
}

//delete entire list function
void LinkedListMidterm::deleteEntireList()
{
    node* current = head;
    if(head==NULL)
    {
        return;
    }
    while(head!=NULL)
    {
        current = head;
        head = head->next;
        free(current);

    }
    cout << "Deleted network" << endl;
}




