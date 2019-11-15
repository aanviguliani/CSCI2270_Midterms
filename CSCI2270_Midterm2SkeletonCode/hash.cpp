#include <iostream>
#include "hash.hpp"

using namespace std;

node* HashTable::createNode(int key)
{
    node* nw = new node;
    nw->key = key;
    nw->next = NULL;
    return nw;
}

HashTable::HashTable(int bsize)
{
    this->tableSize= bsize;
    hashTable = new node*[tableSize];
    for(int i=0;i<bsize;i++)
        hashTable[i] = nullptr;
}

bool HashTable::insertItem(int key)
{
    if(!searchItem(key))
    {
        // TODO :
        int index = hashFunction(key);
        node* temp = hashTable[index];
        if(temp == NULL)
        {
            hashTable[index] = createNode(key);
            return true;
        }
        else
        {
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = createNode(key);
            return true;
        }
    }
    else{
        cout<<"duplicate entry: "<<key<<endl;
        return false;
    }
}

unsigned int HashTable::hashFunction(int key)
{
    return (key % tableSize);
}

void HashTable::printTable()
{
    for (int i = 0; i < tableSize; i++) {
        cout << i <<"|| ";
        node* temp = hashTable[i];
        while(temp != NULL)
        {
            cout << temp->key << " ";
            temp = temp->next;
        }
        cout << endl;
    }

}

node* HashTable::searchItem(int key)
{
    //Compute the index by using the hash function
    int index = hashFunction(key);

    if(hashTable[index] != NULL)
    {
        node* temp = hashTable[index];
        while(temp != NULL)
        {
            if(temp->key == key)
                return temp;
            else
                temp = temp->next;
        }

    }
    return NULL;
}