//
// Created by Ria Thakkar on 10/16/18.
//

#ifndef QUEUES_QUEUE_H
#define QUEUES_QUEUE_H

#include "LinkedList.h"

class queue {
private:
    node *head;
    node *tail;
    int queueMaxSize;
    int queueSize;
public:
    int queueHead;
    int queueTail;
    bool isEmpty();
    bool isFull();
    void enqueue(int);
    void dequeue();
    queue(int);
    string *arrayQueue;
};


#endif //QUEUES_QUEUE_H
