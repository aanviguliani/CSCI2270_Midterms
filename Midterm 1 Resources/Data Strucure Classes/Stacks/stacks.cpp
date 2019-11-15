//
// Created by Ria Thakkar on 10/16/18.
//

#include "stacks.h"

stacks::stacks(int max) {
    maxSize = max;
}
bool stacks::isFull() {
    if(top == maxSize){
        return true;
    }
    return false;
}
bool stacks::isEmpty() {
    if(top == 0){
        return true;
    }
    return false;
}
void stacks::push(int value){
    if(!isFull()){
        data[top] = value;
        top++;
    }
    return;
}
int stacks::pop(){
    top--;
    return data[top];
}