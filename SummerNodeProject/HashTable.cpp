//
//  HashTable.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/29/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "HashTable.h"
#include <cmath>
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
    capacity = 101;
    size = 0;
    efficiencyPercentage = 2.0/3.0;
    front = new HashNode<Type>[capacity];
    //this->data = data;
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
long  HashTable<Type> :: findPosition(Type data)
{
    
}

template<class Type>
long  HashTable<Type> :: handleCollision(Type data)
{
    
}

template<class Type>
bool HashTable<Type> :: remove(Type data)
{
    
}
