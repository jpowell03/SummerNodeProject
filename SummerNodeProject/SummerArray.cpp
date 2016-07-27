//
//  SummerArray.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/27/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "SummerArray.h"
#include <assert.h>

template <class Type>
SummerArray<Type>::SummerArray(int length)
{
    assert(length > 0);
    
    this->length = length;
    modifiedNodes = new bool[length];
    front = nullptr;
    end = nullptr;
    
    DataNode<Type> * start = new DataNode<Type>;
    front = start;
    end = start;
    for(int index=1; index<length; index++)
    {
        DataNode<Type> * next = new DataNode<Type>();
        end->setNext(next);
        end = next;
    }
    
    for(int index=0; index<length; index++)
    {
        modifiedNodes[index] = false;
    }
}

template <class Type>
Type SummerArray<Type>::getFromIndex(int position)
{
    assert(position >= 0);
    assert(position < length);
    
    Type retrieveValue;
    
    DataNode<Type> * indexPointer = front;
    for(int index=0; index<position; index++)
    {
        indexPointer = indexPointer->getNodePointer();
    }
    
    retrieveValue = indexPointer->getNodeData();
    return retrieveValue;
}

template <class Type>
Type SummerArray<Type> :: getFirst()
{
    return front->getNodeData();
}

template <class Type>
Type SummerArray<Type> :: getLast()
{
    return end->getNodeData();
}