#include <iostream>
#include "LinkedListMidterm.h"
using namespace std;
LinkedListMidterm bigList = LinkedListMidterm();
LinkedListMidterm evenList = LinkedListMidterm();
LinkedListMidterm oddList = LinkedListMidterm();

//function to split linked list into odd and even
void splitList()
{
    //declare temp variable and set it to head
    node* temp = bigList.head;
    int previousEven = -1;
    int previousOdd = -1;

    //traverse through big linked list and split into two function
    while(temp!= NULL)
    {
        //if remainder of key divided by two is zero, add to even linked lsit
        if(temp->key%2 == 0)
        {
            //if previous even is -1, add it to the head
            if(previousEven == -1)
            {
                evenList.addNode(NULL,temp->key);
                previousEven = temp->key;
            }
            else //add to odd linked list
            {
                evenList.addNode(evenList.searchNetwork(previousEven),temp->key);
                previousEven = temp->key;
            }
        }
        else
        {
            //if previous odd is negative 1, add it to the head
            if(previousOdd == -1)
            {
                oddList.addNode(NULL,temp->key);
                previousOdd = temp->key;
            }
            else //add to middle of linked list
            {
                oddList.addNode(oddList.searchNetwork(previousOdd),temp->key);
                previousOdd = temp->key;
            }
        }
        temp=temp->next;
    }
    //print out linked list
    cout << "Even linked list:" << endl;
    evenList.printList();
    cout << endl;
    cout << "Odd linked list" << endl;
    oddList.printList();
    cout << endl;
}

int main()
{
    //only even numbers test case
    bigList.addNode(NULL, 2);
    bigList.addNode(bigList.searchNetwork(2), 0);
    bigList.addNode(bigList.searchNetwork(0), 4);
    bigList.addNode(bigList.searchNetwork(4), 6);
    bigList.printList();
    cout << endl;

    //call split list function
    splitList();

    //delete entire list
    bigList.deleteEntireList();
    evenList.deleteEntireList();
    oddList.deleteEntireList();

    cout << endl;
    cout << "New linked list:" << endl;

    //only odd numbers test case
    bigList.addNode(NULL, 1);
    bigList.addNode(bigList.searchNetwork(1), 3);
    bigList.addNode(bigList.searchNetwork(3), 5);
    bigList.addNode(bigList.searchNetwork(5), 7);
    bigList.printList();
    cout << endl;

    //call splitList Function
    splitList();

    //delete entire list
    bigList.deleteEntireList();
    evenList.deleteEntireList();
    oddList.deleteEntireList();



}