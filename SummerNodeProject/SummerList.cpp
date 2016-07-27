//
//  SummerList.cpp
//  SummerNodeProject
//
//  Created by Henrichsen, Cody on 7/27/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "SummerList.h"

template<class Type>
SummerList<Type>::SummerList()
{
    size = 0;
    front= nullptr;
    end = nullptr;
}

template<class Type>
Type SummerList<Type>::getFromIndex(int index)
{
    
}

template<class Type>
void SummerList<Type> :: addAtIndex(int index, Type data)
{
    assert(index >= 0 && index <= size);
   
    DataNode<Type> * newNode = new DataNode<Type>(data);
    
    // if list is empty need to set front and end to newNode
    if(size == 0)
    {
        front = newNode;
        end = newNode;
    }
    
    DataNode<Type> * indexPointer = front;
    

    if(index == 0)
    {
        newNode->setNext(indexPointer);
        front = newNode;
    }
    else if(index == size-1)
    {
        end->setNext(newNode);
        end = newNode;
    }
    else
    {
        for(int position = 0; position < index - 1; position++)
        {
            indexPointer = indexPointer->getNodePointer();
        }
        
        newNode->setNext(indexPointer->getNext());
        //DataNode<Type> * temp = indexPointer->getNext();
        //newNode->setNext(temp);
        
        indexPointer->setNext(newNode);   // setNext == setNodePointer
    }
    size++;
}


template<class Type>
void SummerList<Type> :: add(Type data)
{
    addAtIndex(size-1, data);
}

template<class Type>
void SummerList<Type> :: addAtFront(Type data)
{
    addAtIndex(0, data);
}


template<class Type>
Type SummerList<Type> :: getFirst()
{
    
}

template<class Type>
Type SummerList<Type> :: getLast()
{
    
}

template<class Type>
void SummerList<Type> :: sort()
{
    
};

template<class Type>
void SummerList<Type> :: setAtIndex(int index, Type data)
{
    
}
template<class Type>
int SummerList<Type> :: getSize()
{
    
}

template<class Type>
Type SummerList<Type> :: remove(int index)
{
    assert(index >= 0 && index <= size);
    
    Type removedValue;
    
    DataNode<Type> * indexPointer = front;
    DataNode<Type> * removedNode = nullptr;
    DataNode<Type> * next = nullptr;
    
    if(size == 1)
    {
        removedValue = front->getNodeData();
        front = nullptr;
        end = nullptr;
        delete indexPointer;
    }
    else if(index == 0)
    {
        removedValue = front->getNodeData();
        front = front->getNext();
        delete indexPointer;
    }
    else
    {
        for(int position = 0; position < index - 1; position++)
        {
            indexPointer = indexPointer->getNext();
        }
        removedNode = indexPointer->getNext();
        next = removedNode->getNext();
        
        if(removedNode == end)
        {
            end = indexPointer;
        }
        indexPointer->setNext(next);
        removedNode->setNext(nullptr);
        
        removedValue = removedNode->getNodeData();
        
        delete removedNode;
    }
    size--;
    return removedValue;
    
    
}

template<class Type>
bool SummerList<Type> :: contains(Type data)
{
    
}
