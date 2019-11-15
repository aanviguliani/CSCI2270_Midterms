#include <iostream>
using namespace std;

int top = -1;
int maxSize = 5;
int* data = new int[maxSize];

void resize(int *(&data), int *maxSize)
{
    int newMaxSize = *maxSize * 2;
    cout<<"Resizing from "<<*maxSize<<" to "<<newMaxSize<<endl;

    // TODO dynamically allocate an array of size newCapacity
    int *newArray = new int[newMaxSize];
    //cout << "new array" << endl;
    int i = 0;
    // TODO copy all data from oldArray to newArray
    while(i < *maxSize){
        newArray[i] = data[i];
        i++;
    }

    //cout << "after for loop " << endl;
    // TODO free the memory associated with oldArray
    delete []data;
    //cout << "deleted " << endl;
    data = newArray;
    *maxSize = newMaxSize;
}

bool isFull()
{
    if(top == maxSize - 1)
        return true;
    else
        return false;
}

bool isEmpty()
{
    if(top == -1)
        return true;
    else
        return false;
}

void push(int value)
{
    if(!isFull())
    {
        top++;
        data[top] = value;
    }
    else
    {
        resize(data,&maxSize);
        top++;
        data[top] = value;
    }
}

void pop()
{
    if(!isEmpty())
    {
        top--;
    }
    else
        cout << "Err" << endl;
}

void print()
{
    for(int i = 0; i < top; i++)
    {
            cout << data[i] << " ";
    }
    cout << endl;
}

int main()
{
    push(5);
    push(4);
    push(3);
    push(2);
    push(1);
    print();
    push(6);
    print();
}