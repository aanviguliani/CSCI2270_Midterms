#include <iostream>
#include "heaps.hpp"

using namespace std;

Heap::Heap(int hs)
{
    currentSize = 0;
    heapSize = hs;
    heap = new int[heapSize];
}

Heap::~Heap()
{
    delete [] heap;
}

void Heap::printHeap()
{
    for(int i = 0; i < currentSize; i++)
    {
        cout << heap[i] << " ";
    }
    cout << endl;
}

int parent(int index)
{
    return (index-1)/2;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Heap::addToHeap(int value)
{
    if(currentSize == heapSize)
    {
        cout<<"Maximum heap size reached. Cannot insert anymore"<<endl;
        return;
    }

    currentSize = currentSize + 1;
    int index = currentSize - 1;
    heap[index] = value;

    repairUpward(index);

}

void Heap::repairUpward(int index)
{
    if(index && heap[parent(index)]<heap[index]) {
        swap(heap[index],heap[parent(index)]);
        repairUpward(parent(index));
    }
}

int Heap::removeFromHeap()
{
    heap[0] = heap[currentSize-1];
    currentSize--;
    repairDownward(0);
    return heap[0];
}

int Heap::peekValue()
{
    return heap[0];
}

bool Heap::isFull()
{
    if(currentSize == heapSize)
        return true;
    return false;
}

bool Heap::isEmpty()
{
    if(currentSize == 0)
        return true;
    return false;
}

int leftChild(int index)
{
    return ((2*index) + 1);
}

/*
Returns the right child of a node.
*/
int rightChild(int index)
{
    return ((2*index) + 2);
}


void Heap::repairDownward(int i)
{
    int l = leftChild(i);
    int r = rightChild(i);
    int largest = i;

    if(l<currentSize && heap[l]>heap[i])
        largest = l;
    if(r<currentSize && heap[r]>heap[largest])
        largest = r;
    if(largest!=i) {
        swap(heap[i],heap[largest]);
        repairDownward(largest);
    }
}


