//
//  stacks.cpp
//  
//
//  Created by Ria Thakkar on 10/1/18.
//

#include <stdio.h>
//stacks and queues
//restricts which data can be accessed at a given time
//can implement with array or linked lists
//stack - last in first out
// - like a stack of cafeteria plates
//always add and remove from the top.
//push(value) - add value to top
//pop(value) - remove from stack
//queue - first in first out
//line at the grocery store
//process things in order
//remove elements from head of the queue.
//add elements to tail
//enqueue add to queue at tail
//dequeue remove from queue at head.
//queue
//private:
//head
//tail
//data
//currentSize - how many items in queue
//maxSize - how many items can be in queue
//isempty
//isFull
//array implementation
//sentence = "a liger its pretty much my favorite animal."
dequeue
-remove word at head
//circular quee
//move head
//head and tail positions wrap around as we enqueue and dequeue
//dequeue(){
//    if (!dequeue.isempty()){
//        value = data[head]; //get data at that position
//        currentSize--;
//        if(head == maxSize-1){
//            head = 0;
//        } else
//            head++;
//
//    } else {
//        cout<<"empt"<<endl;
//    }
//
//}
//enqueue(value){
//    if(!isFull()){
//        data[tail] = value;
//        currentSize++;
//        if(tail == maxSize -1){
//            tail = 0;
//        } else tail ++;
//    } else {
//        cout<<"Full"<<endl;
//    }
//}
//linked list implementation of queue
//circular queue
//adding pointer from tail back to the head

enqueue(value){
    node * n = new node(value, NULL);
    if(tail != NULL){
        tail->next = n;
        tail = n;
        n->next = head;
    } else {
        tail = n;
        head = tail;
        head->next = head;
    }
}
dequeue{
    node *n = null;
    if(head != NULL){
        n= head;
        head = head->next;
    } else {
        tail = head;
    }
    return n;
}
//STACKS
//linked list
//push(value)
//pop()
//Array Implemnentation
when top == 0 {
    stack is empty
}
when top = maxSize{
    stack is full
}
when top > maxSize{
    stack overflow
}
//linked list
if top == Null{
    stack is empty
} // only difference
stack
private:
top //could be pointer or index
data
maxSize
public:
stack()
isFull()
isEmpty()
push(value)
pop()


push(value){
    if(!isFull){
        data[top] = value
        top++
    }
}
pop(){
    top--;
    return data[top];
}

int main(){
    
}
