#include <iostream>
#include "heaps.hpp"

int main()
{
    Heap h1 = Heap(10);
    h1.addToHeap(1);
    h1.addToHeap(7);
    h1.printHeap();

    h1.addToHeap(3);
    h1.printHeap();

    h1.removeFromHeap();
    h1.printHeap();

}