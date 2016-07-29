//
//  HashTable.h
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/29/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef HashTable_h
#define HashTable_h

#include <stdio.h>
#include "HashNode.h"

template<class Type>
class HashTable
{
private:
    int capacity;  // can hold
    int size;      // items in the table
    double efficiencyPercentage;  // how full do you want it to get before resizing
    HashNode<Type> * front;
    bool isPrime(int number);
    void resize();
    long nextPrime(long current);
    long findPosition(Type data);
    long handleCollision(Type data);
    
public:
    HashTable();
    void add(Type data);
    bool remove(Type data);
    
    
    
};

#endif /* HashTable_h */