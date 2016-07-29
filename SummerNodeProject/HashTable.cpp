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
HashTable<Type> :: HashTable()
{
    
}

template<class Type>
void HashTable<Type> :: add(Type data)
{
    
}

template<class Type>
bool HashTable<Type> :: remove(Type data)
{
    
}
