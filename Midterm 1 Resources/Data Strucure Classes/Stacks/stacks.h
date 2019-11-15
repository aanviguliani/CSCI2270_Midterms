//
// Created by Ria Thakkar on 10/16/18.
//

#ifndef STACKS_STACKS_H
#define STACKS_STACKS_H
#include "LinkedList.h"

class stacks {
private:
    int top;
    const int maxSize = 10;
public:
    stacks(int);
    int data[10];
    void push(int);
    int pop();
    bool isFull();
    bool isEmpty();
};


#endif //STACKS_STACKS_H
