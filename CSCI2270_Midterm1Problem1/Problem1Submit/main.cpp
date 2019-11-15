#include <iostream>
#include "LinkedListMidterm.h"

using namespace std;

int main()
{
    LinkedListMidterm l1 = LinkedListMidterm();
    //test case: make the head and tail even numbers
    //add nodes with only even numbers at tail and head
    l1.addNode(NULL, 2);
    l1.addNode(l1.searchNetwork(2), 3);
    l1.addNode(l1.searchNetwork(3), 4);
    l1.addNode(l1.searchNetwork(4), 6);
    //print the list
    l1.printList();
    //sum up the evens and print it out
    int sum = l1.sumEvens(l1.head);
    cout << "Sum of evens is: " << sum << endl;

    //delete entire list
    l1.deleteEntireList();

    //test case: make all odd numbers
    l1.addNode(NULL, 1);
    l1.addNode(l1.searchNetwork(1), 3);
    l1.addNode(l1.searchNetwork(3), 5);
    l1.addNode(l1.searchNetwork(5), 7);
    l1.printList();
     sum = l1.sumEvens(l1.head);
    cout << "Sum of evens is: " << sum << endl;


}