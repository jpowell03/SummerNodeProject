//
//  HashTable.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/29/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "HashTable.h"
#include <cmath>
#include <iostream>
using namespace std;

template<class Type>
HashTable<Type> :: HashTable()
{
    this->capacity = 101;
    this->size = 0;
    this->efficiencyPercentage = 2.0/3.0;
    this->front = new HashNode<Type>();
    HashNode<Type> * currentEnd = front;
    
    // loop to create the first array of nodes for storage.
    for(int index = 1; index < capacity; index++)
    {
        HashNode<Type> * next = new HashNode<Type>();  // create an node
        currentEnd->setNode(next);                     // connect to the next node
        currentEnd = next;                             // shift to next node
    }
}

template<class Type>
void HashTable<Type> :: add(Type data)
{
    if((static_cast<double>(size)/capacity) >= efficiencyPercentage)
    {
        resize();
    }
    
    // find position (where does it go)
    long position = findPosition(data);
    HashNode<Type> * indexPointer = front;
    
    for(long index=0; index < position; index++)
    {
        indexPointer = indexPointer->getNode();
    }
    
    indexPointer->setData(data);
    indexPointer->setStuffed(true);

}

template<class Type>
long  HashTable<Type> :: findPosition(Type data)
{
    long insertedPosition;
    
    unsigned long address = (long)&data;
    
    insertedPosition = address % capacity;
    HashNode<Type> * indexPointer = front;
    for(long index = 0; index <= insertedPosition; index++)
    {
        indexPointer = indexPointer->getNode();
    }
        
    if(indexPointer->hasStuffed())
       {
           insertedPosition = handleCollision(data, insertedPosition);
       }
    
    return insertedPosition;
}

template<class Type>
long  HashTable<Type> :: handleCollision(Type data, long currentPosition)
{
    long updatedPosition = -1;
    HashNode<Type> * indexPointer = front;
    
    for(long index = 0; index < currentPosition + 1; index++)
    {
        indexPointer = indexPointer->getNode();
    }

    
    for(long index = currentPosition + 1; (index < capacity && updatedPosition == -1); index++)
    {
        if(!indexPointer->hasStuffed())
        {
            updatedPosition = index;
        }
        indexPointer = indexPointer->getNode();
    }

    if(updatedPosition == -1)
    {
        indexPointer = front;
        for(long index = 0; (index < currentPosition && updatedPosition == -1); index++)
        {
            if(!indexPointer->hasStuffed())
            {
                updatedPosition = index;
            }
            indexPointer = indexPointer->getNode();
        }
    }
    
    return updatedPosition;
    
}

template<class Type>
void HashTable<Type> :: displayContents()
{
    HashNode<Type> * indexPointer = front;
    for(int index = 0; index<capacity; index++)
    {
        if(indexPointer->hasStuffed())
            cout << indexPointer->getData() << " # " << index << endl;
        
        indexPointer = indexPointer->getNode();
    }
}

template<class Type>
bool  HashTable<Type> :: isPrime(int number)
{
    if(!(number%2))
        return false;
    if(!(number%3))
        return false;
    if(!(number%5))
        return false;
    if(!(number%7))
        return false;
    for(int divisor=13; divisor < sqrt(number); divisor=divisor+2)
    {
        if(!(divisor%3)||!(divisor%5)||!(divisor%7))
            continue;
        if(!(number%divisor))
            return false;
    }
    return true;
}

template<class Type>
void  HashTable<Type> :: resize()
{
    
}

template<class Type>
long  HashTable<Type> :: nextPrime(long current)
{
    
}

template<class Type>
bool HashTable<Type> :: remove(Type data)
{
    
}
