

#include "LinkedList.h"
#include <stddef.h>
#include <iostream>
using namespace std;
LinkedList::LinkedList(){
    head = NULL;
}
void LinkedList::addNode(int value, int prev){
    if(head == NULL){
        node *n = new node(value, NULL, NULL);
        head = n;
        cout<<"added the head"<<endl;
        return;
    }
    node *current = head;
    while(current->next != NULL){
        if(current->key == prev){
            break;
        }
        current = current->next;
    }
    node *n = new node(value, NULL, NULL);
    //if tail
    if(current->next == NULL){
        current->next = n;
        n->previous = current;
        cout<<"Added to the tail"<<endl;
        return;

    }

    current->next->previous = n;
    n->next = current->next;
    n->previous = current;
    current->next = n;
    return;
}
void LinkedList::deleteNode(int value) {
    //three cases
    //if nodeToDelete is head
    //if nodeToDelete is tail
    //if nodeToDelete is not either and is
    if(head == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    node *current = head;
    while(current->next != NULL){
        if(current->key == value){
            break;
        }
        current = current->next;
    }
    if(current == head){
        head = current->next;
        head->previous = NULL;
        delete current;
        return;

    }
    if(current->next == NULL){
        current->previous->next = NULL;
        delete current;
        return;
    }

    current->next->previous = current->previous;
    current->previous->next = current->next;
    return;
}
void LinkedList::printList() {
    if(head == NULL){
        cout<<"empty list"<<endl;
        return;
    }
    node *current = head;
    while(current != NULL){
        cout<<current->key<<endl;
        current=current->next;
    }

}