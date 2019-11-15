//
// Created by Ria Thakkar on 10/16/18.
//

#include "queue.h"
#include <iostream>
queue::queue(int max){
    head = NULL;
    tail = NULL;
    queueHead = 0;
    queueTail = 0;
    queueMaxSize = max;
    queueSize = 0;
    arrayQueue = new string[queueMaxSize];
}

bool queue::isFull() {
    if(queueSize >= queueMaxSize){
        return true;
    }
    return false;
}
bool queue::isEmpty() {
    if(queueSize == 0){
        return true;
    }
    return false;
}
void queue::enqueue(int value) {
    if(isFull()){
        std::cout<<"queue is full"<<std::endl;
        return;
    }

    arrayQueue[queueTail] = value;
    queueTail++;
    queueSize++;
    if(queueTail > queueMaxSize){ //circular queue
        queueTail = 0;
    }
}