#include <iostream>
#include <exception>
using namespace std;

void heapPush(int *heap, int value, int capacity, int *cSize){
	if (*cSize == capacity){
		cout<<"heap full"<<endl;
	}else{
		*cSize = *cSize + 1;
		int i = *cSize;
		heap[*cSize] = value;
		cout<<heap[*cSize]<<endl;
		while(i > 1 and heap[i/2] < heap[i]){
			int temp = heap[i/2];
			heap[i/2] = heap[i];
			heap[i] = temp;
			i = i / 2;
		}

	}
}
void minHeapify(int *heap, int *currentSize, int i){
	int left = 2*i;
	int right = 2*i + 1;
	int smallest = i;
	if (left <= *currentSize and heap[left] < heap[i]){
		smallest = left;
	}
	if(right <= *currentSize and heap[right] < heap[smallest]){
		smallest = right;
	}
	if(smallest != i){
		int temp = heap[i];
		heap[i] = heap[smallest];
		heap[smallest] = temp;
		minHeapify(heap, currentSize, smallest);
	}
}

int heapPop(int *heap, int capacity, int *cSize){
	int popVal;
	if (*cSize == 0){
		cout<<"empty"<<endl;
		return -1;
	}
	if(*cSize == 1){
		*cSize = *cSize - 1;
		return heap[1];
		
	}else{
		popVal = heap[1];
		heap[1] = heap[*cSize];
		*cSize = *cSize - 1;
		minHeapify(heap, cSize, 1);
	}
	return popVal;

}
int main(){
	int capacity = 10;	
	int *currentSize = new int;
	*currentSize = 0;
	int *heap = new int[capacity];
	for(int i = 0; i < capacity; i++){
		heap[i] = 0;
	}
    
    try{
        heapPush(heap, 10, capacity, currentSize);
        heapPush(heap, 10, capacity, currentSize);
        heapPush(heap, 1, capacity, currentSize);
        heapPush(heap, 5, capacity, currentSize);
        
        for(int i = 0; i <= *currentSize; i++){
            cout<<heap[i]<<" ";
            
        }
        cout<<" "<<endl;
        
    } catch(exception& e) {
        cout<<"repeat values"<<endl;
    }
	
    try{
        heapPush(heap, 10, capacity, currentSize);
        heapPush(heap, 10, capacity, currentSize);
        heapPush(heap, -1, capacity, currentSize);
        heapPush(heap, 5, capacity, currentSize);
        
        for(int i = 0; i <= *currentSize; i++){
            cout<<heap[i]<<" ";
            
        }
        cout<<" "<<endl;
        
    } catch(exception& e) {
        cout<<"negative numbers"<<endl;
    }
    
    try{
        heapPush(heap, 10, capacity, currentSize);
        heapPush(heap, 10, capacity, currentSize);
        heapPush(heap, 5, capacity, currentSize);
        heapPush(heap, 2, capacity, currentSize);
        
        for(int i = 0; i <= *currentSize; i++){
            cout<<heap[i]<<" ";
            
        }
        cout<<" "<<endl;
        
    } catch(exception& e){
        cout<<"adding a new minimum vALUE"<<endl;
    }
    
    try{
        heapPush(heap, 10, capacity, currentSize);
        heapPush(heap, 10, capacity, currentSize);
        heapPush(heap, 5, capacity, currentSize);
        heapPush(heap, 2, capacity, currentSize);
        heapPush(heap, 10, capacity, currentSize);
        heapPush(heap, 10, capacity, currentSize);
        heapPush(heap, 5, capacity, currentSize);
        heapPush(heap, 2, capacity, currentSize);
        heapPush(heap, 10, capacity, currentSize);
        heapPush(heap, 10, capacity, currentSize);
        heapPush(heap, 5, capacity, currentSize);
        heapPush(heap, 2, capacity, currentSize);
        heapPush(heap, 10, capacity, currentSize);
        heapPush(heap, 10, capacity, currentSize);
        heapPush(heap, 5, capacity, currentSize);
        heapPush(heap, 2, capacity, currentSize);
        
        for(int i = 0; i <= *currentSize; i++){
            cout<<heap[i]<<" ";
            
        }
        cout<<" "<<endl;
        
    } catch(exception& e){
        cout<<"heap full"<<endl;
    }
	int returnValue;
	returnValue = heapPop(heap, capacity, currentSize);
	cout<<returnValue<<endl;
	return 0;	
}
