#include <iostream>
#include "heaps.hpp"

using namespace std;


float* heapSort(float arr[],int size)
{
    Heap h1 = Heap(size);
    for(int i = 0; i < size; i++)
    {
        h1.addToHeap(arr[i]);
    }

    h1.printHeap();
}

int main()
{
    int size = 5;
    int size2 = 6;
    float arr[] = {1,7,5.5,2,1.1};
    float arr2[] = {2,7,8,1,5,19};
    heapSort(arr,size);
    heapSort(arr2,size2);
}